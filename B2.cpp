//
// Created by Yaroslav! on 06/06/2024.
//

#include "B2.h"

B2::B2() : b2(0) {

}

B2::B2(int x) : b2(x) {
    b2 = x;
}

void B2::show_B2() {
    cout << "B2 = " << b2 << endl;
}
