//
//  Ship.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Ship {
public:
    int length;
    int peoples;
    int speed;
    
    Ship(int length, int peoples, int speed);
    virtual void write(ostream &fo) = 0;
    virtual void print() = 0;
    
    int getLength() const;
    
    void setLength(int length);
    
    int getPeoples() const;
    
    void setPeoples(int peoples);
    
    int getSpeed() const;
    
    void setSpeed(int speed);
};


#endif 
