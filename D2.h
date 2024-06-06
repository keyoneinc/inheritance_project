//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_1_D2_H
#define UNTITLED_1_D2_H

#include "D1.h"
#include "iostream"
using namespace std;

class D2 : protected D1 {
public:
    int d2;
public:
    D2();
    D2(int x, int y, int z, int i);

    void show_D2();
};


#endif //UNTITLED_1_D2_H
