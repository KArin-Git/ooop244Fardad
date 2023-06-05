//
//  Student.hpp
//  returnThis
//
//  Created by Bussarin Apichitchon on 5/6/2566 BE.
//

#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

#include <iostream>
// ** because it is a header file we cannot using namespace

namespace sdds {

class Student {
    
    // member variable or attribute
    char* m_name{}; // DMA name
    unsigned int m_stno{}; // stno will be in positive number
    
    // initialize member
    void init();
    
    // delete DMA
    void deallocate();
    
public:
    //MARK: a constructor
    Student();
    Student(const char* name);
    Student(unsigned int stno);
    Student(const char* name, unsigned int stno);
    //MARK: a destructor
    ~Student();
    
    //receives the information from console
    Student& set();
    
    // NOTE: stno = 0 >> default set BAD THING because logically when we have student name that should have stno too setting to default zero can make thing difficult
    Student& set(const char name[], unsigned int stno = 0);
    
    // display information
    std::ostream& display()const;
};


}

#endif /* student_hpp */
