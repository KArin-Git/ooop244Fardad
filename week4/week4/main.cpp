#include <iostream>
#include "student.h"

using namespace std;
using namespace sdds;

int main(int argc, const char * argv[]) {
   
    Student S;
    // S.init(); >> using constructor
    S.display();
    S.set("Arin Api", 1234);
    S.display();
    S.set();
    S.display();
    // S.deallocate(); >> using destructor
    
    return 0;
}
