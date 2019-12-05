//
//  main.cpp
//  laba1 3курс
//
//  Created by Fedor Kodzhebash on 30.10.19.
//  Copyright © 2019 Fedor Kodzhebash. All rights reserved.
//

#include <iostream>
#include <fstream>

#include <string>
#include "Keeper.hpp"
#include "Boat.hpp"
#include "Sailboat.hpp"
#include "Submarine.hpp"

using namespace std;

const string filename = "text.txt";

int main() {
    setlocale(LC_ALL, "Russian");
  
    
    Keeper *keeper = new Keeper();//создаем объект класса кипер
    bool fl = true; //оьявляем переменную типа буль
    int mode;//пункты меню
    
    while (fl) {
        cout << "0 - Записать в файл" << endl;
        cout << "1 - Прочитать из файла" << endl;
        cout << "2 - Добавить новый элемент" << endl;
        cout << "3 - Удалить элемент " << endl;
        cout << "4 - Напечатать Keeper" << endl;
        cout << "5 - Выход" << endl;
        
        cin >> mode;
        
        switch (mode) {
            case 0: {
                keeper->write(filename);
                break;
            }
            case 1: {
                cout << "Читаю из файла" << endl;
                ifstream file;//обьявление файла
                file.open(filename);
                int count; // количество записей о карпаблях
                file >> count;
                cout << " Количество:  " << count << endl;
                string type;
                for (int i = 0; i < count; ++i) {
                    file >> type;
                    if (type == "boat") {
                        int peoples, speed;
                        file >> peoples;
                        file >> speed;
                        string to, material, gohar;
                        file.ignore();//игнорирование энтэры
                        getline(file, to);
                        file.ignore();
                        getline(file, material);
                        file.ignore();
                        getline(file, gohar);
                        Boat *b = new Boat(0, peoples, speed, to, material, gohar);
                        keeper->add(*b);
                    }
                    else if (type == "sailboat") {
                        int length, peoples, speed;
                        string name, military;
                        file >> length;
                        file >> peoples;
                        file >> speed;
                        file >> military;
                        file >> name;
                        string type;
                        file >> type;
                        Sailboat *s = new Sailboat(length, peoples, speed, type, name, military);
                        keeper->add(*s);
                    }
                    else if (type == "submarine") {
                        int length, peoples, speed, underwaterTime;
                        string armour;
                        file >> length;
                        file >> peoples;
                        file >> speed;
                        file >> underwaterTime;
                        file >> armour;
                        int width;
                        file >> width;
                        Submarine *sb = new Submarine(length, peoples, speed, width, underwaterTime, armour);
                        keeper->add(*sb);
                    }
                }
                file.close();
                break;
            }
            case 2: {
                int length;
                int peoples;
                int speed;
                
                int selected;//выбор
                cout << "ВВедите тип: 1 - Катер, 2 - Парусник, 3 - Подводная лодка" << endl;
                cin >> selected;
                if (selected != 1) {
                    cout << "Длина: " << endl;
                    cin >> length;
                }
                cout << "Экипаж: " << endl;
                cin >> peoples;
                cout << "Скорость: " << endl;
                cin >> speed;
                
                switch (selected) {
                    case 1: {
                        string to, material, gohar;
                        cout << "Введите назначение " << endl;
                        cin >> to;
                        cout << "Введите материал " << endl;
                        cin >> material;
                        cout << "Введитье ходовые характеристики " << endl;
                        cin >> gohar;
                        
                        Boat *b = new Boat(0, peoples, speed, to, material, gohar);
                        keeper->add(*b);
                        break;
                    }
                    case 2: {
                        string type;
                        cout << "Введите тип " << endl;
                        cin >> type;
                        string name;
                        cout << "Введите название " << endl;
                        cin >> name;
                        string mulitary;
                        cout << "Военный или мирный?" << endl;
                        cin >> mulitary;
                        Sailboat *s = new Sailboat(length, peoples, speed, type, name, mulitary);
                        keeper->add(*s);
                        break;
                    }
                    case 3: {
                        int width, underwaterTime;
                        string armour;
                        cout << "Введите ширину " << endl;
                        cin >> width;
                        cout << "Введите время под водой " << endl;
                        cin >> underwaterTime;
                        cout << "Введите вооружение " << endl;
                        cin >> armour;
                        Submarine *sub = new Submarine(length, peoples, speed, width, underwaterTime, armour);
                        keeper->add(*sub);
                        break;
                    }
                }
                break;
            }
            case 3: {
                cout << "Введите удаляемый индекс " << endl;
                int index;
                cin >> index;
                keeper->remove(index);
                break;
            }
            case 4: {
                keeper->print();
                break;
            }
            case 5: {
                fl = false;
                break;
            }
        }
    }
    
    delete keeper;
    return 0;
}



