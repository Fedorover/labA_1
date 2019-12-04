//
//  Submarine.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include "Submarine.hpp"

#include <string>
Submarine::Submarine(){

    width = 0;
    underwaterTime = 0;
    armour = '0';
    cout <<"Вызван обычный конструктор дочернего класса "<<endl;
}
Submarine::Submarine(const Submarine& src){ width = src.width;
    
    underwaterTime = src.underwaterTime;
    armour = src.armour;
    cout <<"Вызван конструктор копирования дочернего класса "<<endl;
}

Submarine::~Submarine()
{
    width = 0;
    underwaterTime = 0;
    armour = '0';
    cout <<"Вызван деструктор дочернего класса "<<endl;
}

Submarine::Submarine(int length, int peoples, int speed, int width, int underwaterTime, string &armour) : Ship(length, peoples, speed), width(width), underwaterTime(underwaterTime), armour(armour) {cout <<"Вызван конструктор2 с параметрами дочернего класса  "<<endl;}

void Submarine::write(ostream &fo) {
    fo << "submarine" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << endl << " " << this->underwaterTime << " " << this->armour << endl;
    fo << this->width << endl;
}//функция записи в файл

Submarine::Submarine(int length, int peoples, int speed) : Ship(length, peoples, speed) {cout <<"Вызван конструктор1 с параметрами дочернего класса  "<<endl;}

void Submarine::print() {
    cout << " Тип: " << " Подводная лодка " << " Длина: " << this->length << " Скорость: " << this-> speed << " Экипаж: " << this->peoples;
    cout << " Ширина: " << this->width << " Время под водой: " << underwaterTime << " Вооружение: " << armour << endl;
}//функция записи на экран
