//
//  main.cpp
//  Utils
//
//  Created by Bussarin Apichitchon on 4/6/2566 BE.
//

#include <iostream>

#include "Utils.hpp"

using namespace std;
using namespace sdds;

int main(int argc, const char * argv[]) {
    
    int v;
//    cout << "Integer: ";
//    v = U.getInt();
//    cout << v << endl;
    v = U.getInt(0, 100, "Enter your mark: ");
    cout << v << endl;
    
    return 0;
}
