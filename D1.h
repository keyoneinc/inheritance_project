//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_1_D1_H
#define UNTITLED_1_D1_H

#include "B1.h"
#include "B2.h"
#include "iostream"
using namespace std;

class D1 : public B1, protected B2 {
public:
    int d1;
public:
    D1();
    D1(int x, int y, int z);

    void show_D1();
};


#endif //UNTITLED_1_D1_H
