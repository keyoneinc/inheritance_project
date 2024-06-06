//
// Created by Yaroslav! on 06/06/2024.
//

#include "D1.h"

D1::D1() : d1(0) {

}

D1::D1(int x, int y, int z) : B1(y), B2(z) {
    d1 = x;
}

void D1::show_D1() {
    cout << "D1 = " << d1 << endl;
    show_B1();
    show_B2();
}

