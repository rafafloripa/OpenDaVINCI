/**
 * OpenDaVINCI - Tutorial.
 * Copyright (C) 2015 Christian Berger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <stdint.h>
#include <iostream>
#include <string>
#include <opendavinci/odcore/base/Thread.h>
#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>
#include <stdio.h>
#include <cstdlib>
#include "rplidar.h"
#ifndef _countof
#define _countof(_Array) (int)(sizeof(_Array) / sizeof(_Array[0]))
#endif

namespace automotive{
    namespace miniature{
using namespace std;

bool checkRPLIDARHealth(RPlidarDriver * drv)
{
    u_result     op_result;
    rplidar_response_device_health_t healthinfo;


cerr<<"getting result"<<endl;
    op_result = drv->getHealth(healthinfo);
cerr<<"check if ok"<<endl;
    if (IS_OK(op_result)) { // the macro IS_OK is the preperred way to judge whether the operation is succeed.
cerr<<"ok"<<endl;
        printf("RPLidar health status : %d\n", healthinfo.status);
        if (healthinfo.status == RPLIDAR_STATUS_ERROR) {
            cerr<<"Error, rplidar internal error detected. Please reboot the device to retry."<<endl;
            // enable the following code if you want rplidar to be reboot by software
            // drv->reset();
            return false;
        } else {
            return true;
        }

    } else {
        cerr<<"Error, cannot retrieve the lidar health code: "<<op_result<<endl;
        return false;
    }
}


int32_t rplidar_read_once() 
{
    const char * opt_com_path = NULL;
    
    #ifdef _WIN32
        // use default com port
        opt_com_path = "\\\\.\\com3";
    #else
        opt_com_path = "/dev/ttyUSB0";
    #endif

    _u32         opt_com_baudrate = 115200;
    u_result     op_result;

    // create the driver instance
    RPlidarDriver * drv = RPlidarDriver::CreateDriver(RPlidarDriver::DRIVER_TYPE_SERIALPORT);
    
    if (!drv) {
        cerr<<"insufficent memory, exit"<<endl;
        return -2;
    }

    // make connection...
    if (IS_FAIL(drv->connect(opt_com_path, opt_com_baudrate))) {
        cerr<<"Error, cannot bind to the specified serial port "<<opt_com_path<<" with baud rate "<<opt_com_baudrate<<endl;
        RPlidarDriver::DisposeDriver(drv);
        return 1;
    }
cerr<<"before health check"<<endl;
    // check health...
    if (!checkRPLIDARHealth(drv)) {
        RPlidarDriver::DisposeDriver(drv);
        return 1;
    }
cerr<<"after health check/before scan"<<endl;

    // start scan...
    drv->startScan();

cerr<<"after scan"<<endl;
    // fetch result and print it out...
    rplidar_response_measurement_node_t nodes[360*2];
    size_t   count = _countof(nodes);

    op_result = drv->grabScanData(nodes, count);

    if (IS_OK(op_result)) {
        drv->ascendScanData(nodes, count);
        for (int pos = 0; pos < (int)count ; ++pos) {
            printf("%s theta: %03.2f Dist: %08.2f Q: %d \n", 
                (nodes[pos].sync_quality & RPLIDAR_RESP_MEASUREMENT_SYNCBIT) ?"S ":"  ", 
                (nodes[pos].angle_q6_checkbit >> RPLIDAR_RESP_MEASUREMENT_ANGLE_SHIFT)/64.0f,
                nodes[pos].distance_q2/4.0f,
                nodes[pos].sync_quality >> RPLIDAR_RESP_MEASUREMENT_QUALITY_SHIFT);
        }
    }else cerr<<"NOT OK"<<endl;

    RPlidarDriver::DisposeDriver(drv);
    return 0;
}

int32_t rplidar_read_continuous() {
    const char * opt_com_path = NULL;
    _u32         opt_com_baudrate = 115200;
    u_result     op_result;

    // read serial port from the command line...
    //if (argc>1) opt_com_path = argv[1]; // or set to a fixed value: e.g. "com3" 

    // read baud rate from the command line if specified...
    //if (argc>2) opt_com_baudrate = strtoul(argv[2], NULL, 10);
opt_com_path = "/dev/ttyUSB0";

    if (!opt_com_path) {
#ifdef _WIN32
        // use default com port
        opt_com_path = "\\\\.\\com3";
#else
        opt_com_path = "/dev/ttyUSB0";
#endif
    }

    // create the driver instance
    RPlidarDriver * drv = RPlidarDriver::CreateDriver(RPlidarDriver::DRIVER_TYPE_SERIALPORT);
    
    if (!drv) {
        cerr<<"insufficent memory, exit"<<endl;
        return -2;
    }


    // make connection...
    if (IS_FAIL(drv->connect(opt_com_path, opt_com_baudrate))) {
        cerr<<"Error, cannot bind to the specified serial port "<<opt_com_path<<endl;
        goto on_finished;
    }



    // check health...
    if (!checkRPLIDARHealth(drv)) {
        goto on_finished;
    }


    // start scan...
    drv->startScan();

    // fetch result and print it out...
    while (1) {
        rplidar_response_measurement_node_t nodes[360*2];
        size_t   count = _countof(nodes);

        op_result = drv->grabScanData(nodes, count);

        if (IS_OK(op_result)) {
            drv->ascendScanData(nodes, count);
            for (int pos = 0; pos < (int)count ; ++pos) {
                printf("%s theta: %03.2f Dist: %08.2f Q: %d \n", 
                    (nodes[pos].sync_quality & RPLIDAR_RESP_MEASUREMENT_SYNCBIT) ?"S ":"  ", 
                    (nodes[pos].angle_q6_checkbit >> RPLIDAR_RESP_MEASUREMENT_ANGLE_SHIFT)/64.0f,
                    nodes[pos].distance_q2/4.0f,
                    nodes[pos].sync_quality >> RPLIDAR_RESP_MEASUREMENT_QUALITY_SHIFT);
            }
        }

    }

    // done!
on_finished:
    RPlidarDriver::DisposeDriver(drv);
    return 0;
}
}}
