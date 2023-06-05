//
//  main.cpp
//  week6
//
//  Created by Bussarin Apichitchon on 4/6/2566 BE.
//

#include <iostream>
#include "Student.h"

using namespace std;
using namespace sdds;

int main(int argc, const char * argv[]) {
   
    // MARK: this is not assignment, it is an initialisation
    // Student S = "Arin Api";
    // Student S{"Arin Api"};
    Student S("Arin Api");
    Student R( 12345);
    // Student L = {"Lisa Simpson", 9999};
    // Student L{"Lisa Simpson", 9999};
    Student L("Lisa Simpson", 9999);
    S.display();
    R.display();
    L.display();
    
    return 0;
}
