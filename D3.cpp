//
// Created by Yaroslav! on 06/06/2024.
//

#include "D3.h"

D3::D3() : d3(0) {

}

D3::D3(int x, int y, int z, int i, int j) : D2(y, z, i, j) {
    d3 = x;

}

void D3::show_D3() {
    cout << "D3 = " << d3 << endl;
    show_D2();

}
