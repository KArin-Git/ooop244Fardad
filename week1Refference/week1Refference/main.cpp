#include <iostream>

using namespace std;

void setTo100(int ref) {
    ref = 100;
}

void setTo100byRef(int& ref) {
    ref = 100;
}

//notice this
bool read(int& val) {
    bool success = true;
    //cin is very shy function. if you give garbage, cin will dont talk to you >> FAILED
    cin >> val;
    //if user's input is not int
    if (cin.fail()) {
        //clear user's input
        cin.clear();
        //ignore 100'000 char until hit '\n'
        cin.ignore(100'000, '\n');
        success = false;
    }
    return success;
}

int main(int argc, const char * argv[]) {
    int a = 20;
    //ref == alias >> can NOT have an uinit ref
    int& r = a;
    int age;
    
    cout << r << endl;
    
    //side effect
    r = 50;
    cout << a << endl;
    
    //everything happen in fuction stays in function this is not pass by ref/pointer
    setTo100(a);
    cout << a << endl;
    
    //REF
    setTo100byRef(a);
    cout << a << endl;
    
    cout << "Enter your age: ";
    if (read(age)) {
        if (age >= 19) {
            cout << "What would you like to drink" << endl;
        }
        else {
            cout << "Get out of here" << endl;
        }
    }
    else {
        cout << "Please insert number only" << endl;
    }
    
    return 0;
}
