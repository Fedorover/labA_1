//
//  Ship.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include "Ship.hpp"


Ship::Ship(int length, int peoples, int speed) : length(length), peoples(peoples), speed(speed) {}

int Ship::getLength() const {
    return length;
}

void Ship::setLength(int length) {
    Ship::length = length;
}

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
