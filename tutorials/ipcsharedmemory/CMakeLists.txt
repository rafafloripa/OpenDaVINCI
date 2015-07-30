# ipcsharedmemory - Sample application
# Copyright (C) 2015 Christian Berger
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

CMAKE_MINIMUM_REQUIRED (VERSION 2.8)

PROJECT (ipcsharedmemory)

###########################################################################
# Find OpenDaVINCI.
FIND_PACKAGE (OpenDaVINCI REQUIRED)

###############################################################################
# Set header files from OpenDaVINCI.
INCLUDE_DIRECTORIES (${OPENDAVINCI_INCLUDE_DIRS}/opendavinci)
# Set include directory.
INCLUDE_DIRECTORIES(include)

###############################################################################
# Build this project.
ADD_EXECUTABLE (ipcsharedmemoryconsumer "ipcsharedmemoryconsumer.cpp")
TARGET_LINK_LIBRARIES (ipcsharedmemoryconsumer ${OPENDAVINCI_LIBRARIES}) 

ADD_EXECUTABLE (ipcsharedmemoryproducer "ipcsharedmemoryproducer.cpp")
TARGET_LINK_LIBRARIES (ipcsharedmemoryproducer ${OPENDAVINCI_LIBRARIES}) 

###############################################################################
# Install this project.
INSTALL(TARGETS ipcsharedmemoryconsumer RUNTIME DESTINATION bin COMPONENT tutorials)
INSTALL(TARGETS ipcsharedmemoryproducer RUNTIME DESTINATION bin COMPONENT tutorials)
