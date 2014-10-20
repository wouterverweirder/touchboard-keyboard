#include <MPR121.h>
#include <Wire.h>

#define numElectrodes 12

int keys[] = {
  KEY_UP_ARROW,
  KEY_DOWN_ARROW,
  KEY_LEFT_ARROW,
  KEY_RIGHT_ARROW,
  ' ',
  'w',
  'a',
  's',
  'd',
  'f',
  'g',
  'q'
};

void setup()
{
  Serial.begin(9600);
  
  Keyboard.begin();

  Wire.begin();
  
  // 0x5C is the MPR121 I2C address on the Bare Touch Board
  if(!MPR121.begin(0x5C)){ 
    Serial.println("error setting up MPR121");  
    while(1);
  }
  
  // pin 4 is the MPR121 interrupt on the Bare Touch Board
  MPR121.setInterruptPin(4);
  
    // this is the touch threshold - setting it low makes it more like a proximity trigger
  // default value is 40 for touch
  //MPR121.setTouchThreshold(2);
  
  // this is the release threshold - must ALWAYS be smaller than the touch threshold
  // default value is 20 for touch
  //MPR121.setReleaseThreshold(1);  
  
  // initial data update
  MPR121.updateTouchData();
}

void loop()
{
  if(MPR121.touchStatusChanged()){
    MPR121.updateTouchData();
    for(int i=0; i<numElectrodes; i++){
      if(MPR121.isNewTouch(i)){
        Keyboard.press(keys[i]);
      } else if(MPR121.isNewRelease(i)) {
        Keyboard.release(keys[i]);
      }
    } 
  }
}
//
