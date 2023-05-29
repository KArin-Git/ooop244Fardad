//
//  main.cpp
//  week5
//
//  Created by Bussarin Apichitchon on 29/5/2566 BE.
//

#include <iostream>

using namespace std;

int* allocateInt(int& num) {
    
    cout << "How many int: ";
    cin >> num;
    
    // DMA
    int* intptr = new int[num];
    
    // flush
    cin.ignore(1000, '\n');
    
    return intptr;
}

int main(int argc, const char * argv[]) {
    
    int size{};
    int* value{};
    
    // calling overload on line 14
    value = allocateInt(size);
    if (value == nullptr) {
        cout << "Allocation Failed!" << endl;
    }
    
    // delete var value because the function that we call use ref mean it is what the arg we put in
    // MARK: not delete int function because we still use it
    delete[] value;
    
    
    
    return 0;
}
