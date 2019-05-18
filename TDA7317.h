// liman324@yandex.ru rcl-radio.ru


#ifndef TDA7317_H
#define TDA7317_H


//ADDR pin = open 0b10000110
//ADDR pin = connected to ground 0b10000100
//#define TDA7317_address 0x84 // адрес 0b10000100 
#define TDA7317_address 0x86 // адрес 0b10000110


#include <Arduino.h>
class TDA7317
{
  public:
    TDA7317();
        void setVolume(int vol);        // 0...47   
        void setBand(int band, int db); // 0...4 (1...5 полоса) , -7...+7 (-14...+14 дБ)
	
  private:
	void writeWire(char a);
};
	
#endif //TDA7317_H
