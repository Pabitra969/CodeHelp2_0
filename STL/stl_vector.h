//
// Created by PABITRA KUMAR GHORAI on 02/04/23.
//

#ifndef CODEHELP_LEARNING_STL_VECTOR_H
#define CODEHELP_LEARNING_STL_VECTOR_H

#endif //CODEHELP_LEARNING_STL_VECTOR_H
#include "iostream"
#include "vector"
using namespace std;

int vector1() {

    // initialize vector
    vector<int> a(5, 1);// here 5 indicates the number of element & 1 is the value of the elements
    for(int i : a) {
        cout << i << " ";
    }
    //vector<data_type> vector_name;
    vector<int> v;
    cout<<"capacity-> " << v.capacity() << endl; // Output-> capacity-> 0

    // to store an element at the end of the vector array
    v.push_back(1);
    cout<<"capacity-> " << v.capacity() << endl; // Output-> capacity-> 1

    v.push_back(2);
    cout<<"capacity-> " << v.capacity() << endl; // Output-> capacity-> 2

    v.push_back(3);
    cout<<"capacity-> " << v.capacity() << endl; // Output-> capacity-> 4 -- when the element count is getting higher
    // than the capacity then the vector makes its capacity double as to the previous capacity

    cout <<"Size of the vector array" << v.size() << endl; //Output Size of the vector array-> 3
    cout<< "element at the 2nd Index" << v.at(2) << endl;

    cout << "first element of the vector" << v.front() << endl;
    cout << "last element of the vector" << v.back() << endl;

    // to delete the last element from the vector
    v.pop_back();
    cout << "last element should be 2 --> " << v.back() << endl;
    for(int i:v) { // here 'i' is the iterator, you can take any name or any character or word
        cout << i << " ";
    }
    for(auto a:v) { // here the auto keyword is to detect automatically the type of the vector elements
        cout << a << " ";
    }

    // to clear all the elements of the vector
    v.clear();
    cout<< "size of the vector" << v.size() << endl;

}