//
// Created by Yaroslav! on 06/06/2024.
//

#include "D2.h"

D2::D2() : d2(0) {

}

D2::D2(int x, int y, int z, int i) : D1(y, z, i ) {
    d2 = x;
}

void D2::show_D2() {
    cout << "D2 = " << d2 << endl;
    show_D1();
}
