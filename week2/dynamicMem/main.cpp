/*
 Creating dynamic memory
 1 - create pointer pointing to that location
 2 - reserve arr size using new variableType[arrSize]
 3 - delete arr size
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int  cnt{};
    int* nums{};
    //int* nums = nullptr;
    
    cout << "Reverser!" << endl;
    cout << "Enter the integer number: ";
    cin >> cnt;
    nums = new int[cnt];
    
    if (nums == nullptr) {
        cout << "Not enough memory" << endl;
    }
    else {
        int i;
        cout << "Enter the number: " << endl;
        for (i = 0; i < cnt; i++) {
            cout << (i + 1) << "> ";
            cin >> nums[i];
        }
        for (i = cnt - 1; i >= 0; i--) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    delete[] nums;
    
    return 0;
}
