//
// Created by PABITRA KUMAR GHORAI on 21/05/23.
//

#include "iostream"
using namespace std;

class Animal {
public:
    string type;
    string name;
    int age;

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog:public Animal {
public:
    // method overriding
    void speak() {
        cout << "Barking" << endl;
    }
};


int main() {
    Dog d1;
    d1.speak();
    return 0;
}