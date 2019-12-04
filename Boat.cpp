//
//  Boat.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include "Boat.hpp"

#include <string>
Boat::Boat(){
    
    to= '0';
    material = '0';
    gohar = '0';
    
    cout <<"Вызван обычный конструктор дочернего класса "<<endl;
}
Boat::Boat(const Boat& src){
    to = src.to;
    material = src.material;
    gohar = src.gohar;
    cout <<"Вызван конструктор копирования дочернего класса "<<endl;
}

Boat::~Boat()
{
    to= '0';
    material = '0';
    gohar = '0';
    cout <<"Вызван деструктор дочернего класса "<<endl;
}
void Boat::write(ostream &fo) {
    fo << "boat" << endl;
    fo << " " << this->speed << " " << this->peoples << endl;
    fo << this->to << endl << this->material << endl << this->gohar << endl;
}

Boat::Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar) : Ship(
                                                                                                                     length, peoples, speed), to(to), material(material), gohar(gohar) {cout <<"Вызван конструктор с параметрами дочернего класса  "<<endl;}

void Boat::print() {
    cout << " Тип: " << " Катер " << " Скорость: " << this->speed << " Экипаж: " << this->peoples;
    cout << " Назначение: " << this->to << " Материал: " << this->material << " Ходовые качества: " << this->gohar << endl;
}

