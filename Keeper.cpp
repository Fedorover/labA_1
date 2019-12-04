//
//  Keeper.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 04.12.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include <iostream>
#include <fstream>

#include "Keeper.hpp"

using namespace std;

Ship **Keeper::getData() const {
    return data;
}

int Keeper::getSize() const {
    return size;
}

Keeper &Keeper::add(Ship &ship) {
    this->size++;
    Ship **copy = new Ship*[this->size - 1];
    for (int i = 0; i < this->size - 1; ++i) {
        copy[i] = this->data[i];
    }
    this->data = new Ship*[this->size];
    for (int j = 0; j < this->size - 1; ++j) {
        this->data[j] = copy[j];
    }
    this->data[size - 1] = &ship;
    return *this;
}

Keeper &Keeper::remove(int index) {
    if (index < 0 || index >= this->size) {
        cout << "Ошибка, неверный индекс массива" << endl;
    }
    else {
        int k = 0;
        Ship **copy = new Ship*[this->size];
        for (int i = 0; i < this->size; ++i) {
            if (i != index) {
                copy[k] = this->data[i];
            }
        }
        this->size--;
    }
    return *this;
}

Keeper &Keeper::print() {
    for (int i = 0; i < this->size; ++i) {
        this->data[i]->print();
    }
    return *this;
}

void Keeper::write(string filename) {
    ofstream file;
    file.open(filename, ios_base::out);
    file << this->size << endl;
    for (int i = 0; i < this->size; ++i) {
        this->data[i]->write(file);
    }
    file.close();
}

Keeper::Keeper() {
    size = 0;
}

Keeper::~Keeper() {
    size = 0;
    delete[]data;
}

