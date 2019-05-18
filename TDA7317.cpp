#include <Arduino.h>
#include <Wire.h>
#include "TDA7317.h"

TDA7317::TDA7317(){
	Wire.begin();
}

void TDA7317::setVolume(int vol){
  vol = 47 - vol;
  writeWire(vol);
}

void TDA7317::setBand(int band, int db){
  switch(band){
     case 0: band = 0b10000000; break;
     case 1: band = 0b10010000; break;
     case 2: band = 0b10100000; break;
     case 3: band = 0b10110000; break;
     case 4: band = 0b11000000; break;
  }
  switch(db){
     case -0: db = 0b00001000; break;
     case -1: db = 0b00001001; break;
     case -2: db = 0b00001010; break;
     case -3: db = 0b00001011; break;
     case -4: db = 0b00001100; break;
     case -5: db = 0b00001101; break;
     case -6: db = 0b00001110; break;
     case -7: db = 0b00001111; break;

     case 1: db = 0b00000001; break;
     case 2: db = 0b00000010; break;
     case 3: db = 0b00000011; break;
     case 4: db = 0b00000100; break;
     case 5: db = 0b00000101; break;
     case 6: db = 0b00000110; break;
     case 7: db = 0b00000111; break;
  }
    int ekv = band + db;
    writeWire(ekv);
}


void TDA7317::writeWire(char a){
  Wire.beginTransmission(TDA7317_address);
  Wire.write (a);
  Wire.endTransmission();
}
