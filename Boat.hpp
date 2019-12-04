//
//  Boat.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#ifndef Boat_hpp
#define Boat_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

#include "Ship.hpp"

class Boat : public Ship {
    string to;//назначение
    string material;//материал
    string gohar;//ходовые качества
public:
    Boat(int length, int peoples, int speed);
    Boat();//конструктор
    Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar);
    Boat(const Boat& src);//конструктор копирования
    
    ~ Boat();
    
public:
    const string &getTo() const;
    
    void setTo(const string &to);
    
    const string &getMaterial() const;
    
    void setMaterial(const string &material);
    
    const string &getGohar() const;
    
    void setGohar(const string &gohar);
    

    void write(ostream &fo) override;
        
    void print() override;
};


#endif






