// liman324@yandex.ru rcl-radio.ru


#ifndef TDA7317_H
#define TDA7317_H


#define TDA7317_address 0x43 // 18 вывод ADDR не замкнут на землю

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
