//
// Created by PABITRA KUMAR GHORAI on 12/05/23.
//
#include "iostream"
using namespace std;

class Animal {
    //state or properties
private:
    int age=10;
    string name;
public:
    //behaviour
    void eat() {
        cout << "Animals eat" << endl;
    }
    void sleep() {
        cout << "Animals sleep" << endl;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
    void getName() {
        cout << "Name = " << name << endl;
    }
    void getAge() {
        cout << "Age = " << age << endl;
    }

    //constructor-> initialize the object
    Animal() {
        this->age = 0;
        this->name = "Suresh";
        cout << "Constructor Called" << endl;
    }

    //Parameterised Constructor
    Animal(int age) {
        this->age = age;
        cout << "Parameterised Constructor Called" << endl;
    }

    //copy constructor
    Animal(Animal& obj) {
        this->age = obj.age;
        this->name = obj.name;
        cout << "Copy constructor is called" << endl;
    }

    void print() {
        cout << this->age << " " << this->name << endl;
    }

    // destructor
    ~Animal() {
        cout << "I am inside the Destructor" << endl;
    }
};


int main() {
    //object creation

    //static
    Animal ramesh;
    ramesh.setAge(20);
//    cout << "Age of ramesh is: " << ramesh.age << endl;
//    cout << "Age of ramesh is:" << ramesh.name << endl;
    ramesh.eat();
    ramesh.setName("Tiger");
    ramesh.getName();
    ramesh.getAge();

    //dynamic Memory
    cout << endl;
    Animal* suresh = new Animal;
    // calling destructor


    (*suresh).setAge(15);
    suresh->setName("Lion");
    suresh->getName();
    suresh->getAge();

    //copy object creation
    Animal* Naman = new Animal(10);

    Animal B = ramesh;
    Animal C(B); // this all are the syntax of copy constructor

    //Sallow Copy
    Animal a;
    a.setAge(20);
    a.setName("Dear");

    Animal b = a;
    b.setName("Gabbar");

    a.print();
    b.print();

    delete Naman;
    delete suresh;


    return 0;
}