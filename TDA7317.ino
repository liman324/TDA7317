#include <Wire.h>
#include <TDA7317.h>
  TDA7317 tda;
  
void setup(){ 
  Serial.begin(9600);Wire.begin();
  audio();
}

void loop(){}

void audio()
  tda.setVolume(35); // громкость 0...47
  /////////// номер полосы, дБ (-7...+7) //////////
  tda.setBand(0,0);  // 10000 Hz
  tda.setBand(1,0);  // 260   Hz
  tda.setBand(2,0);  // 1000  Hz
  tda.setBand(3,0);  // 3000  Hz
  tda.setBand(4,0);  // 60    Hz
}
