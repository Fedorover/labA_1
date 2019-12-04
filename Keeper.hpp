//
//  Keeper.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#ifndef Keeper_hpp
#define Keeper_hpp

#include <stdio.h>



#include "Ship.hpp"

class Keeper {
private:
    Ship * *data;
    int size;
public:
    Ship * *getData() const;
    int getSize() const;
    Keeper &add(Ship &ship);
    Keeper &remove(int index);
    Keeper &print();
    
    
    Keeper();
    ~Keeper();
    
    void write(string filename);
};


#endif 
