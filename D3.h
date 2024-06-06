//
// Created by Yaroslav! on 06/06/2024.
//

#ifndef UNTITLED_1_D3_H
#define UNTITLED_1_D3_H

#include "D2.h"
#include "iostream"
using namespace std;

class D3 : private D2 {
public:
    int d3;
public:
    D3();
    D3(int x, int y, int z, int i, int j);

    void show_D3();
};


#endif //UNTITLED_1_D3_H
