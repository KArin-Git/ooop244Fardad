#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

namespace sdds {

class Student {
// private:
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
    
    //MARK: a destructor
    ~Student();
    
    //receives the information from console
    void set();
    
    // overloading
    void set(const char name[], unsigned int stno);
    
    // display information
    void display()const;
};


}

#endif /* student_hpp */
