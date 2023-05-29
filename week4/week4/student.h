#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

namespace sdds {

class Student {
//private:
    //member variable or attribute
    char* m_name{}; //Dynamic name
    unsigned int m_stno{};
    
public:
    //MARK: a constructor
    Student();
    //MARK: a destructor
    ~Student();
    //function or method
    void init();
    void set(); //receives the information from console
    void set(const char name[], unsigned int stno);
    
    void display()const;
    void deallocate();
};


}

#endif /* student_hpp */
