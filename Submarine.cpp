//
//  Submarine.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include "Submarine.hpp"

#include <string>

Submarine::Submarine(int length, int peoples, int speed, int width, int underwaterTime, string &armour) : Ship(length, peoples, speed), width(width), underwaterTime(underwaterTime), armour(armour) {}

void Submarine::write(ostream &fo) {
    fo << "submarine" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << endl << " " << this->underwaterTime << " " << this->armour << endl;
    fo << this->width << endl;
}

Submarine::Submarine(int length, int peoples, int speed) : Ship(length, peoples, speed) {}

void Submarine::print() {
    cout << " Тип: " << " Подводная лодка " << " Длина: " << this->length << " Скорость: " << this->speed << " Экипаж: " << this->peoples;
    cout << " Ширина: " << this->width << " Время под водой: " << underwaterTime << " Вооружение: " << armour << endl;
}
