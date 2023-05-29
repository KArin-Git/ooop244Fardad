//
//  main.cpp
//  formatting
//
//  Created by Bussarin Apichitchon on 29/5/2566 BE.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    char str[21] = "Freddie";
    char ch = 'A';
    int iv = 1234;
    double dv = 123.123456789;
    
    cout << str << " " << ch << " " << iv << " " << dv << endl;
    
    // create width
    cout << "*";
    cout.width(20);
    cout << iv << "*" << endl;
    
    // left
    cout << "*";
    cout.setf(ios::left);
    cout.width(20);
    cout << iv << "*" << endl;
    // right
    cout << "*";
    cout.setf(ios::right);
    cout.width(20);
    cout << iv << "*" << endl;
    
    // cout.unsetf(ios::right); >> SOLUTION for tricky part
    
    // MARK: tricky part >> left and right OK BUT right and left cannot they won't come  back to left
    cout.setf(ios::left);
    cout << "*";
    cout.width(20);
    cout << iv << "*" << endl;
    cout << "*";
    cout.width(20);
    cout << iv << "*" << endl;
    cout << "*";
    cout.width(20);
    cout << iv << "*" << endl;
    
    // fill the empty space
    cout << "*";
    cout.fill('.');
    cout.setf(ios::right);
    cout.width(20);
    cout << iv << "*" << endl;
    
    // fill the empty space
    cout << "*";
    cout.fill('-');
    cout.setf(ios::right);
    cout.width(20);
    cout << iv << "*" << endl;
    cout.fill(' '); // reset
    
    // specific decimal position
    cout.setf(ios::fixed);
    cout.precision(5);
    cout << dv << endl;
    cout.precision(3);
    cout << dv << endl;
    
    
    return 0;
}
