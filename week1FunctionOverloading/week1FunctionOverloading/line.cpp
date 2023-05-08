#include <iostream>
//always include .h
#include "line.hpp"
using namespace std;

namespace sdds {

void line (char fill, unsigned int len) {
    //case 1
//    for (; len; cout << fill, len--);
    //case 2
//    while (len) {
//        cout << fill;
//        len--;
//    }
    //case3
    unsigned int i;
    for (i = 0; i < len; i++) {
        cout << fill;
    }
    cout << endl;
}

//void line (char fill) {
//    line(fill, 79);
//}
//
//void line() {
//    line('=');
//}

void line(unsigned int len) {
    line('=', len);
}

}
