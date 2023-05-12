//
// Created by PABITRA KUMAR GHORAI on 03/04/23.
//

#ifndef CODEHELP_LEARNING_STL_DEQUE_H
#define CODEHELP_LEARNING_STL_DEQUE_H

#endif //CODEHELP_LEARNING_STL_DEQUE_H

#include "iostream"
#include "deque"

using namespace std;

int deque() {

    //initialization of deque
    deque<int> d;
    d.push_back(1); // to insert element at the end of the data structure
    d.push_front(2); // to insert the element at the starting of the data structure
    for(int i : d) {
        cout << i << " ";
    }

    d.pop_front(); // to delete the first element of the data structure
    d.pop_back(); // to delete the element at the end of the data structure

    cout << "back-> " << d.front() << endl;
    cout << "back-> " << d.back() << endl;

    cout << "Empty or not->" << d.empty() << endl;

    d.erase(d.begin(), d.begin()+1);



    return 0;
}