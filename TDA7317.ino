#include <Wire.h>
#include <TDA7317.h>
  TDA7317 tda;
  
void setup(){ 
  Serial.begin(9600);Wire.begin();
  audio();
}

void loop(){}

void audio(){
  tda.setVolume(47); // громкость 0...47
  tda.setBand(0,0);  // номер полосы, дБ (-7...+7)
  tda.setBand(1,0);
  tda.setBand(2,0);
  tda.setBand(3,0);
  tda.setBand(4,0);
}
