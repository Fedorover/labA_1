//
//  Ship.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//
#include "Ship.hpp"
Ship::Ship(){
    length  = 0;
    peoples = 0;
    speed = 0;
    cout <<"Вызван обычный конструктор базового класса "<<endl;
}
Ship::Ship(const Ship& src){ length = src.length;
    
    peoples = src.peoples;
    speed = src.speed;
    cout <<"Вызван конструктор копирования базового класса "<<endl;
}
Ship::Ship(int length, int peoples, int speed) : length(length), peoples(peoples), speed(speed) {
    cout <<"Вызван конструктор с параметрами базового класса  "<<endl;
    
}
Ship::~Ship()
{
    length  = 0;
    peoples = 0;
    speed = 0;
cout <<"Вызван деструктор базового класса "<<endl;
}

int Ship::getLength() const {
    return length;
}//возвращаем длинну в программу

void Ship::setLength(int length) {
    Ship::length = length;
}//приравниваем значение введенное с клавиатуры

int Ship::getPeoples() const {
    return peoples;
}

void Ship::setPeoples(int peoples) {
    Ship::peoples = peoples;
}

int Ship::getSpeed() const {
    return speed;
}

void Ship::setSpeed(int speed) {
    Ship::speed = speed;
}
