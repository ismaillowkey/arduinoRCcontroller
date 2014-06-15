/*
  Software serial multple serial test
 
 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.
 
 The circuit: 
 * RX is digital pin 10 (connect to TX of other device)
 * TX is digital pin 11 (connect to RX of other device)
 
 Note:
 Not all pins on the Mega and Mega 2560 support change interrupts, 
 so only the following can be used for RX: 
 10, 11, 12, 13, 50, 51, 52, 53, 62, 63, 64, 65, 66, 67, 68, 69
 
 Not all pins on the Leonardo support change interrupts, 
 so only the following can be used for RX: 
 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).
 
 created back in the mists of time
 modified 25 May 2012
 by Tom Igoe
 based on Mikal Hart's example
 
 This example code is in the public domain.
 
*/

// Using android as controller via bluetooth
// Download Bluetooth RC controller via play store 
// http://bit.ly/1lAxr7V
// Default Password is 1234
// Modified By Ismail Lowkey
// www.ismail-lowkey.blogspot.com
// Thank you for using

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
char val;

void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  mySerial.println("Hello, world?");
}

void loop() // run over and over
{
  if (mySerial.available()){
    val = mySerial.read();}
    
  if (val == 'F')
     Serial.println("Front");
  if (val == 'B')
     Serial.println("Back");
  if (val == 'S')
      Serial.println("Stop");
  if (val == 'L')
      Serial.println("Left");
  if (val == 'R')
      Serial.println("Right");
  if (val == 'G')
      Serial.println("Forward Left");
  if (val == 'I')
      Serial.println("Forward Right");
  if (val == 'H')
      Serial.println("Back Left");
  if (val == 'J')
      Serial.println("Back Right");
  if (val == 'W')
      Serial.println("Front Light ON");
  if (val == 'w')
      Serial.println("Front Light OFF");
  if (val == 'U')
      Serial.println("Back Light ON");
  if (val == 'u')
      Serial.println("Back Light OFF");
  if (val == 'V')
      Serial.println("Horn ON");
  if (val == 'v')
      Serial.println("Horn OFF");
  if (val == 'X')
      Serial.println("Extra ON");
  if (val == 'x')
      Serial.println("Extra OFF");
  
  if (val == '0')
      Serial.println("Speed 0");
  if (val == '1')
      Serial.println("Speed 10");
  if (val == '2')
      Serial.println("Speed 20");
  if (val == '3')
      Serial.println("Speed 30");
  if (val == '4')
      Serial.println("Speed 40");
  if (val == '5')
      Serial.println("Speed 50");
  if (val == '6')
      Serial.println("Speed 60");
  if (val == '7')
      Serial.println("Speed 70");
  if (val == '8')
      Serial.println("Speed 80");
  if (val == '9')
      Serial.println("Speed 90");
  if (val == 'q')
      Serial.println("Speed 100");

}
