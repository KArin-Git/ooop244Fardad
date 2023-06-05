//
//  Student.cpp
//  returnThis
//
//  Created by Bussarin Apichitchon on 5/6/2566 BE.
//

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

namespace sdds {

Student::Student() {
    init();
}

Student::Student(const char* name) {
    init(); // make sure everything clean to start
    set(name);
}

Student::Student(unsigned int stno) {
    init();
    set("No name", stno);
}

Student::Student(const char* name, unsigned int stno) {
    init();
    set(name, stno);
}

Student::~Student() {
    deallocate();
}

void Student::init() {
    m_name = nullptr;
    m_stno = 0;
}

Student& Student::set() {
    bool done = true;
    char name[51]{};
    unsigned int stno{};
    cout << "Name: ";
    //cin >> name;
    do {
        done = true;
        cin.getline(name, 51);
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Too long" << endl;
            done = false;
        }
    } while(!done);
    cout << "Student number: ";
    cin >> stno;
    //flush new line
    cin.ignore(1000, '\n');
    set(name, stno);
    return *this;
}

// MARK: return *this
Student& Student::set(const char name[], unsigned int m_stno) {
    deallocate(); // prevent memory leak
    m_name = new char[strlen(name) + 1];
    strncpy(m_name, name, 50);
    m_name[50] = '\0';
    // FIXME: very bad thing to do, always use a different name for argument.
    this->m_stno = m_stno;
    return *this;
}

ostream& Student::display()const {
    if (m_name) {
        cout << "Name: " << m_name; // remove << endl; by using ostream& to return cout
        if (m_stno) {
            cout << "Student number: " << m_stno;
        }
        else {
            cout << "(Not registered)";
        }
        cout << endl;
    }
    else {
        cout << "name is invalid"; // remove << endl;
    }
    return cout;
}

void Student::deallocate() {
    delete[] m_name;
}

}
