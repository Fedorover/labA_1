//
//  Ship.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//
//абстрактный
#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Ship {
public:
    int length;//длина
    int peoples;//экипаж
    int speed;//скорость
    
    
    Ship();//конструктор
    Ship(const Ship& src);//конструктор копирования
    Ship(int length, int peoples, int speed);//конструктор с параметрами
    ~ Ship();
    virtual void write(ostream &fo) = 0;//чистая виртуальная функция(ввода)
    virtual void print() = 0;//чистая виртуальная функция(вывода)
    
    int getLength() const;//функция для вывода длины
    
    void setLength(int length);//функция для установки длины
    
    int getPeoples() const;
    
    void setPeoples(int peoples);
    
    int getSpeed() const;
    
    void setSpeed(int speed);
};


#endif 
