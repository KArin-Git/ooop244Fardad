//
//  main.cpp
//  week7_zaa
//
//  Created by Bussarin Apichitchon on 11/6/2566 BE.
//
/*
 ** Binary operator **
 A operator B
 TypeA A;
 TypeB B;
 returnType(sth) TypeA::operator...(TypeB B);
 
 ** Unary operator **
 B =operator A;
 returnTypeB TypeA::operator...();
 
 ** NON member **
 A = B operator C
 returnTypeA operator...(TypeB B, TypeC C);
 */
#include <iostream>

using namespace std;

class Container {
    int m_capacity; // in cc or litre ** fixed
    int m_volume; // being vary
public:
    // set capacity and volume
    Container& set(int volume, int capacity) {
        if ( volume > capacity) {
            m_volume = -1;
        }
        else {
            m_volume = volume;
        }
        m_capacity = capacity;
        return *this;
    }
    // set volume
    Container& set(int volume) {
        if ( volume > m_capacity) {
            m_volume = -1;
        }
        else {
            m_volume = volume;
        }
        
        return *this;
    }
    // constructor
    Container(int volume, int capacity = 250) {
        set(volume, capacity);
    }
    // return True if m_volume < 0
    bool isInvalid()const {
        return m_volume < 0;
    }
    // display
    ostream& display(ostream& os = cout)const {
        if (!isInvalid()) {
            os << "Container: " << m_volume << "/" << m_capacity;
        }
        return os;
    }
    // MARK: Unary operator
    // add (pour volume to another Container)
    Container& add(int volume) {
        set(volume + m_volume);
        return *this;
    }
    // add (pour volume to another Container)
    Container& operator+=(int volume) {
        set(volume + m_volume);
        return *this;
    }
    // ++C prefix
    Container& operator++() {
        set(m_volume + 1);
        return *this;
    }
    // C++ postfix
    Container operator++(int) { // has an int as arg for no reason
        Container old = *this;
        return old;
    }
    // MARK: Binary operator
    // R = C + D;
    // R = C.operator+(D)
    Container operator+(const Container& ROper)const {
        Container res(m_volume + ROper.m_volume,
                      m_capacity + ROper.m_capacity);
        return res;
    }
    // R = res;
    // R.operator=(res)
    Container& operator=(const Container& ROper) {
        set(ROper.m_volume);
        return *this;
    }
    // MARK: bool
    // !R
    // bool R.operator()
    // return True if m_volume == 0
    bool operator!()const {
        return m_volume == 0;
    }
    
    // TODO: Extra
    // pouring one container into another
    // R << C
    // R.operator<<(C)
    Container& operator<<(Container& ROper) {
        set(ROper.m_volume + m_volume);
        ROper.set(0);
        return *this;
    }
};

int main(int argc, const char * argv[]) {
    
    Container C(200, 1000);
    Container D(100, 200);
    Container R(0, 1500);
    C.display() << endl;
    D.display() << endl;
    R.display() << endl;
    if (!R) {
        cout << "This container is empty" << endl;
    }
    // FIXME: why does operator = grab m_container from R (1500)?? why not C + D (1200)
    R = C + D;
    C.display(cout << "C ") << endl;
    D.display(cout << "D ") << endl;
    R.display(cout << "R ") << endl;
    
    /*
    // pouring with operator<<
    cout << "Before pouring" << endl;
    D.display(cout << "D ") << endl;
    R.display(cout << "R ") << endl;
    R << D;
    cout << "After pouring" << endl;
    D.display(cout << "D ") << endl;
    R.display(cout << "R ") << endl;
    */
    
    /*
     C.display() << endl;
     C.add(75).display() << endl;
     // C.add(75);
     C.operator+=(50);
     C.display() << endl;
     C += 100;
     C.display() << endl;
     ++C;
     C.display() << endl;
     */
    return 0;
}
