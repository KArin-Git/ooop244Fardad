//
//  main.cpp
//  coutNclogNcerror
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
    
    // set clog to fail state so that clog won't print
    clog.setstate(ios::failbit);
    // set cout to fail
    cout.setstate(ios::failbit);
    
    if (cout.fail()) {
        cerr << "Can't print, cout is sleep!" << endl;
    }
    
    clog << "Printing double: " << endl;
    cout << dv << endl;
    // clear cout on line 22 that is why after this line cout come back to work
    cout.clear();
    
    clog << "Printing double with 6 digitd after decimal point: " << endl;
    cout.precision(6);
    cout << dv << endl;
    
    return 0;
}
