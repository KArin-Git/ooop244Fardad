//
//  main.cpp
//  returnThis
//
//  Created by Bussarin Apichitchon on 5/6/2566 BE.
//

#include <iostream>
#include "Student.h"

using namespace std;
using namespace sdds;

int main(int argc, const char * argv[]) {
    
//    int* p;
//    int i;
//    p = &i;
//    int& R = i;
//    // *p and R are both reference of i
    
    Student S = "Jack";
    // display() is a new name of cout
    S.display() << endl;
    S.set("Homer", 12345).display();
    cout << " has overwritten Jack!" << endl;
    
    return 0;
}
