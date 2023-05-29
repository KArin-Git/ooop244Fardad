/*
 DMA
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int cnt{};
    //int* nums = nullptr;
    int* nums{};
    
    cout << "Reverser!" << endl;
    cout << "Enter the number of integers: ";
    cin >> cnt;
    //new type, how many >> borrowing the memory from OS
    //new will set nums to nullptr when it fail to find an allocate memory
    nums = new int[cnt];
    //if you have enough memory
    if (nums == nullptr) {
        cout << "Not enough memory" << endl;
    }
    else {
        int i;
        cout << "Enter the numbers: " << endl;
        for (i = 0; i < cnt; i++) {
            cout << (i + 1) << "> ";
            cin >> nums[i];
        }
        for (i = cnt - 1; i >= 0; i--) {
            cout << nums[i] << " ";

        }
        cout << endl;
    }
    
    //to make sure that you won't have a memory leak, giving back the memory to OS
    delete[] nums;
    
    return 0;
}
