/*
 Pointer
 pointer of  >> *
 address of >> &
 target of >> *
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a = 24;
    //int pointer p = address of a
    int* p = &a;
    //target of p = 345
    *p = 345;
    cout << a << endl;
    
    int ar[5];
    *ar = 2345;
    ar[2] = 4444;
    cout << ar[2] << endl;
    *(ar + 2) = 5555;
    cout << ar[2] << endl;
    //line 24 and 26 are identical
    
    int b[6]{ 10, 20, 30, 40, 50, 60};
    int* bptr = &b[2];
    cout << *bptr << endl;
    for (int i = 0; i < 4; i++) {
        cout << bptr[i] << " ";
    }
    cout << endl;
    //the difference between b and bptr is bptr points to b but b points to anything in the memory
    
    return 0;
}
