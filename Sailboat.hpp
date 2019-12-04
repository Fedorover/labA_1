//
//  Sailboat.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#ifndef Sailboat_hpp
#define Sailboat_hpp

#include <stdio.h>
#include <iostream>
#include "Ship.hpp"

using namespace std;

class Sailboat : public Ship {
    string type;//тип
    string name;//название
    string military;//военный или мирный
public:
    Sailboat();//конструктор
    
    Sailboat(const Sailboat& src);//конструктор копирования
    
    ~ Sailboat();
    
    Sailboat(int length, int peoples, int speed, const string &type, string &name, string &military);
    
    Sailboat(int length, int peoples, int speed);
    
    const string &getType() const;
    
    void setType(const string &type);
    
    const string &getName() const;
    
    void setName(const string &name);
    
    const string &getMilitary() const;
    
    void setMilitary(const string &military);
    
    void print() override;
    
    void write(ostream &fo) override;
};


#endif

