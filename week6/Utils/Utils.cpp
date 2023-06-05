//
//  Utils.cpp
//  Utils
//
//  Created by Bussarin Apichitchon on 4/6/2566 BE.
//
/*
 Lazy valuation
  a && b >> if a == false, then skip b
         >> if a == true, then look at b
 */

#include <iostream>

#include "Utils.hpp"

using namespace std;

namespace sdds {

// MARK: file scope instance called U of utils in Utils.cpp
Utils U;

// get integer
int Utils::getInt() {
    
    int value{};
    bool done{};
    
    do {
        done = false;
        cin >> value;
        if (cin) { // same as !cin.fail
            // if the last char is not '\n' >> garbage
            if (cin.get() != '\n') {
                cout << "Only an integer please, try again: ";
            }
            else {
                done = true;
            }
        }
        // cin.fail
        else {
            // clear the fail state
            cin.clear();
            cout << "Invalid Integer, try again: ";
        }
        
        /*
         FULL version before adjust lazy valuation
         // not done
         if (!done) {
             // flush
             cin.ignore(10000, '\n');
         }
         */
        
        // if (!done) cin.ignore(10000, '\n');
        (!done) && cin.ignore(10000, '\n'); // 3 version from line 52 to 59 are the same
        
    } while (!done);
    
    return value;
}

// get integer between min and max
int Utils::getInt(int min, int max, const char* prompt) {
    
    int value{};
    
    // if provide message then using it
    if (prompt) cout << prompt;
    
    /*
     FULL version before adjust lazy valuation
     do {
         value = getInt();
         if (value < min || value > max) {
             cout << "Please insert the number that between " << min << " and " << max << ", try again: ";
         }
     } while (value < min || value > max);
     */
    do {
        value = getInt();
        // con1 if value is NOT in range, then skip con2
        // con1 is true, then do con2
    } while ((value < min || value > max) &&
             cout << "Please insert the number that between " << min << " and " << max << ", try again: ");
    
    
    return value;
}

}
