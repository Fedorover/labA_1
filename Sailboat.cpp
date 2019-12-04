//
//  Sailboat.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include "Sailboat.hpp"

#include <string.h>
#include <string>

using namespace std;
Sailboat::Sailboat(){
    
    type = '0';
    name = '0';
    military = '0';
    
    cout <<"Вызван обычный конструктор дочернего класса "<<endl;
}
Sailboat::Sailboat(const Sailboat& src){
    type = src.type;
    military = src.military;
    name = src.name;
    cout <<"Вызван конструктор копирования дочернего класса "<<endl;
}

Sailboat::~Sailboat()
{
    type = '0';
    name = '0';
    military = '0';
    cout <<"Вызван деструктор дочернего класса "<<endl;
}

Sailboat::Sailboat(int length, int peoples, int speed, const string &type, string &name, string &military) : Ship(length, peoples, speed), type(type), name(name), military(military) {cout <<"Вызван конструктор2 с параметрами дочернего класса  "<<endl;}

void Sailboat::write(ostream &fo) {
    fo << "sailboat" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << " " << this->military << " " << this->name << endl;
    fo << this->type << endl;
}

void Sailboat::print() {
    cout << " Тип: " << " Парусник" << " Длина: " << this->length << " Скорость: " << this->speed << " Экипаж: " << this->peoples;
    cout << " Тип: " << this->type << " " << this->military << " Название: " << this->name << endl;
}

const string &Sailboat::getType() const {
    return type;
}

Sailboat::Sailboat(int length, int peoples, int speed) : Ship(length, peoples, speed) {cout <<"Вызван конструктор1 с параметрами дочернего класса  "<<endl;}

void Sailboat::setType(const string &type) {
    Sailboat::type = type;
}

const string &Sailboat::getName() const {
    return name;
}

void Sailboat::setName(const string &name) {
    Sailboat::name = name;
}

const string &Sailboat::getMilitary() const {
    return military;
}

void Sailboat::setMilitary(const string &military) {
    Sailboat::military = military;
}

