//
//  main.cpp
//  week6
//
//  Created by Bussarin Apichitchon on 4/6/2566 BE.
//

#include <iostream>
#include "student.h"

using namespace std;
using namespace sdds;

int main(int argc, const char * argv[]) {
   
    /*
     Student S;
     // S.init(); >> using constructor
     S.display();
     S.set("Arin Api", 1234);
     S.display();
     S.set();
     S.display();
     // S.deallocate(); >> using destructor
     */
    Student* S = new Student[3];
    int i{};
    
    for (i = 0; i < 3; i++) {
        S[i].set();
    }
    for (i = 0; i < 3; i++) {
        cout << (i + 1) << ": ";
        S[i].display();
    }
    
    delete[] S;
    
    return 0;
}
