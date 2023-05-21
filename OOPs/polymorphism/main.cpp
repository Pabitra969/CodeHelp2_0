//
// Created by PABITRA KUMAR GHORAI on 20/05/23.
//
#include "iostream"
using namespace std;

class Maths {
public:

    //polymorphism ->compile time polymorphism-> function overloading

    int sum(int a, int b) {
        return a + b;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    int sum(int a, float b) {
        return float(a) + b;
    }
};

class Param {
public:
    int val;


    //compile time polymorphism-> operator overloading
    void operator+(Param& object) {
        cout << "We are in operator overloading." << endl;
        int val1 = this->val;
        int val2 = object.val;
        cout << val1 - val2 << endl;
    }
};

int main() {
    Maths obj;
    cout << float(obj.sum(2, 5.12f)) << endl;

    Param object1, object2;
    object1.val = 2;
    object2.val = 7;

    object1 + object2;

    return 0;
}