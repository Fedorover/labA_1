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
    int width;
    int underwaterTime;
    string armour;
    
    void write(ostream &fo) override;
    
    Submarine(int length, int peoples, int speed, int width, int underwaterTime, string &armour);
    
    Submarine(int length, int peoples, int speed);
    
    void print() override;
};


#endif 
