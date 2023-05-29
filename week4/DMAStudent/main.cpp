#include <iostream>
#include "student.h"

using namespace std;
using namespace sdds;

int main(int argc, const char * argv[]) {
   
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
