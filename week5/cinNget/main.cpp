//
//  main.cpp
//  cinNget
//
//  Created by Bussarin Apichitchon on 29/5/2566 BE.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    char ch{};
    cout << "Char: ";
    ch = cin.get(); // return an int
    cout << "*" << ch << "*" << endl;
    cin.ignore(1000, '\n');
    
    cout << "Char with reference: ";
    cin.get(ch); // return the cin reference
    /*
    if (cin.get(ch).fail()) {
        
    }
    */
    cout << "*" << ch << "*" << endl;
    cin.ignore(1000, '\n');
    
    
    char str[21]{};
    cout << "cstring with get: ";
    cin.get(str, 21); // will NOT eat delim and will NOT fail on max
    cout << "*" << str << "*" << endl;
    
    cout << "cstring with getline: ";
    cin.getline(str, 21); // will eat the delim and will fail on max
    //cin.getline(str, 21, ',');
    cout << "*" << str << "*" << endl;
    if (cin) {
        cout << "Char after delimiter is: ";
        ch = cin.get();
        cout << "*" << ch << "*" << endl;
    }
    else {
        cout << "Too long!, must flush keyboard" << endl;
    }
    
    return 0;
}
