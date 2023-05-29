#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

namespace sdds {

Student::Student() {
    init();
}

Student::~Student() {
    deallocate();
}

void Student::init() {
    m_name = nullptr;
    m_stno = 0;
}

void Student::set() {
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
}

void Student::set(const char name[], unsigned int stno) {
    deallocate(); //prevent memory leak
    m_name = new char[strlen(name) + 1];
    strncpy(m_name, name, 50);
    m_name[50] = '\0';
    m_stno = stno;
}

void Student::display()const {
    if (m_name) {
        cout
        << "Name: " << m_name << ", "
        << "Student number: " << m_stno << endl;
    }
    else {
        cout << "name is invalid" << endl;
    }
}

void Student::deallocate() {
    delete[] m_name;
}

}
