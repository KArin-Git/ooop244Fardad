#include <iostream>
#include "line.hpp"

using namespace sdds;

int main(int argc, const char * argv[]) {
    //notice that we can have many function in the same name >> cpp look for number and type of arg
    //cpp signature is name and arg
    line('-', 50);
    
    line('.');
    
    line();
    
    //ASCII 65 == A >> ' ' for human readable ability
    //line(65);
    
    //after init *void line(unsigned int len)* compiler couldn't understand which function we are intend to use *void or unsigned int* so we put u as a unsign after 65
    line(65u);
    
    return 0;
}
