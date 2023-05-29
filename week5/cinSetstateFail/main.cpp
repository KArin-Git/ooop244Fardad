//
//  main.cpp
//  cinSetstateFail
//
//  Created by Bussarin Apichitchon on 29/5/2566 BE.
//

#include <iostream>

using namespace std;

void getMark(int& mark) {
    
    cin >> mark;
    if (mark < 0 || mark > 100) cin.setstate(ios::failbit);
}

int main(int argc, const char * argv[]) {
    
    int mark;
    
    cout << "Enter mark: ";
    
    getMark(mark);
    
    // if (!cin) {
    if (cin.fail()) {
        cout << "invalid mark!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    else {
        cout << "You got: " << mark << endl;
    }
    
    return 0;
}
