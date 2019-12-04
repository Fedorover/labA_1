//
//  Submarine.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#ifndef Submarine_hpp
#define Submarine_hpp

#include <stdio.h>
#include "Ship.hpp"

class Submarine : public Ship {
public:
    int width;//ширина
    int underwaterTime;//время под водой
    string armour;//вооружение
    
    Submarine();//конструктор
    
    Submarine(const Submarine& src);//конструктор копирования
    
   ~ Submarine();
    
    void write(ostream &fo) override;//объявляем виртуальную функцию из базового класса
    
    Submarine(int length, int peoples, int speed, int width, int underwaterTime, string &armour);
    
    Submarine(int length, int peoples, int speed);
    
    void print() override;
};


#endif 
