//
// Created by PABITRA KUMAR GHORAI on 02/04/23.
//

#ifndef CODEHELP_LEARNING_STL_H
#define CODEHELP_LEARNING_STL_H

#endif //CODEHELP_LEARNING_STL_H
#include "iostream"
#include "array"

using namespace std;

int arrays() {
    int basic[3] = {1,2,3};

    array<int, 4> a = {1,2,3,4};
    // to find the size of the array
    int size = a.size();

    for (int i = 0; i < size; ++i) {
        cout << a[i] << " "
    }

    cout<<"element at 2nd position" << a.at(1) << endl; // O(1)
    // to check the array is empty or not
    cout<< "Empty or not-> " << a.empty() << endl; // O(1)
    //to get the first element
    cout << "first element-> " << a.front() << endl; // O(1)
    // to get the last element
    cout << "last element-> " << a.back() << endl; // O(1)

}

