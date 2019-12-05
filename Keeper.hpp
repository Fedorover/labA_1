//
//  Keeper.hpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//
//контейнер для хранения и обработки объектов
#ifndef Keeper_hpp
#define Keeper_hpp

#include <stdio.h>



#include "Ship.hpp"

class Keeper {
private:
    Ship * *data;// динамический массив указателей на тип ship а не значения типа ship
    int size;//размер массива
public:
    Ship * *getData() const;//получение массива указателей
    int getSize() const;//получение разменра массива
    Keeper &add(Ship &ship);//добавление производных обьектов абстрактного класса ship
    Keeper &remove(int index);// удаление производных обьектов абстрактного класса ship
    Keeper &print();//функция вся печать на экран
    void write(string filename);//функция печати в файл(сохр в файл)
    
    Keeper();
    Keeper(int size);
    Keeper(const Keeper& src);//конструктор копирования
    ~Keeper();
    
    
};


#endif 
