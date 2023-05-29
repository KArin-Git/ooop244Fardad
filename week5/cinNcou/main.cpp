//
//  main.cpp
//  cinNcou
//
//  Created by Bussarin Apichitchon on 29/5/2566 BE.
//

#include <iostream>

using namespace std;

int main() {
    
    int v{};
    char str[21]{};
    char ch{};
    double dv{};
    
    cout << "Int: ";
    cin >> v;
    cout << v << endl;
    
    cout << "Double: ";
    cin >> dv;
    cout << dv << endl;
    
    cout << "cstring: ";
    cin >> str; //white space chars are delimiters
    cout << str << endl;
    
    cout << "Char: ";
    cin >> ch;
    cout << ch << endl;
    
    
    
    return 0;
}
