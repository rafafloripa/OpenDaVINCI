To be able to upload the car code to the Arduino you must first downlaod the Arduino IDE.

Once you have done that to be able to compile the code be sure to include the libraries under the libraries folder to your libraries folder in your Arduino installation. This folder is usually under $HOME/Arduino/Libraries
So just copy paste the libraries to the appropriate folder and restart your Arduino IDE.

Note:
Car1 is the file with the libraries made by Enrique Cordero.
Car2 is with the SRF08 library from Arduino. (This was implemented due to some issues with the SRF08 sensors) - this library is more stable since it does not jam the arduino with a failed i2c connection, however it is less reliable on the measurements. This is why both files are kept.
