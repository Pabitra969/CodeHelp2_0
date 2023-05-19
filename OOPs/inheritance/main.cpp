//
// Created by PABITRA KUMAR GHORAI on 19/05/23.
//
#include "iostream"
using namespace std;

class Animal {
protected:
    int age = 10;
};

class Dog:protected Animal {
public:
    void print() {
        cout << this->age << endl;
    }
};

class Puppy:protected Dog {
public:
    void print() {
        cout << this->age << endl;
    }
};

int main() {
    Dog d1;
    d1.print();
    Puppy p1;
    p1.print();
    return 0;
}