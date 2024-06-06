//
// Created by Yaroslav! on 06/06/2024.
//

#include "D4.h"

D4::D4() : d4(0) {

}

D4::D4(int x, int y, int z, int i, int j) : D2(y, z, i, j) {
    d4 = x;

}

void D4::show_D4() {
    cout << "D4 = " << d4 << endl;
    show_D2();

}
