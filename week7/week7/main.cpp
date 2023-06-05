//
//  main.cpp
//  week7
//
//  Created by Bussarin Apichitchon on 5/6/2566 BE.
//

#include <iostream>

using namespace std;

class Cup {
    unsigned int m_capacity;
    unsigned int m_volume;
    
    // set m_volume
    Cup& set(unsigned int volume) {
        if (volume <= m_capacity) {
            m_volume = volume;
        }
        else {
            setInvalid();
        }
        return *this;
    }
    
    // if m_cap == 0 return true (invalid)
    bool isInvalid()const {
        return m_capacity == 0;
    }
    
public:
    // init
    Cup(unsigned int capacity = 250u) {
        m_capacity = capacity;
        m_volume = 0;
    }
    
    // set everything to empty state OR invalid safe empty state (obj is invalid)
    Cup& setInvalid() {
        m_capacity = 0;
        return *this;
    }
    
    // add volume that is not exceed capacity
    Cup& add(unsigned int volume) {
        set(volume + m_volume);
        return *this;
    }
    
    // add >> operator+=
    Cup& operator+=(unsigned int volume) {
        set(volume + m_volume);
        return *this;
    }
    
    // add >> operator+
    Cup operator+(const Cup& rightOperand)const {
        Cup res(m_capacity + rightOperand.m_capacity);
        res += (m_volume + rightOperand.m_volume);
        return res;
    }
    
    // add >> operator+ for integer
    Cup operator+(unsigned int volume)const {
        Cup res(m_capacity);
        res += volume;
        return res;
    }
    
    // MARK: ???? >> we need this because operator + plus both cap and volume
    // Logically capacity should NOT change
    Cup& operator=(const Cup& rightOperand) {
        set(rightOperand.m_volume);
        return *this;
    }
    
    // display
    ostream& display(ostream& ostr = cout) {
        if (!isInvalid()) {
            ostr << m_volume << "/" << m_capacity;
        }
        else {
            ostr << "Invalid Cup object";
        }
        return ostr;
    }
};

int main(int argc, const char * argv[]) {
    
    /*
    Cup coffee;
    coffee.display() << endl;
    // coffee.display(cout << "Here is ") << " a cup of coffee" << endl;
    coffee.add(100);
    coffee.display() << endl;
    // coffee.add(100) >> using operator+= instead
    coffee.operator+=(50);
    coffee.display() << endl;
    // coffee.add(75) >> using operator+= instead
    coffee.operator+=(75);
    coffee.display() << endl;
    */
    
    Cup c1, c2, c3, c4(400);
    c1.display(cout << "c1: ") << endl;
    c2.display(cout << "c2: ") << endl;
    c3.display(cout << "c3: ") << endl;
    
    c1 +=(100);
    c1.display(cout << "c1: ") << endl;
    
    c2 += 50;
    c2.display(cout << "c2: ") << endl;
    
    // c3.operator=(c2.operator+(c1));
    c3 = c2 + c1;
    c3.display(cout << "c3: ") << endl;
    
    c4 = c3 + 200;
    c4.display(cout << "c4: ") << endl;
    
    return 0;
}
