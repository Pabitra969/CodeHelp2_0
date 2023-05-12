//
// Created by PABITRA KUMAR GHORAI on 03/04/23.
//

#ifndef CODEHELP_LEARNING_STL_LIST_H
#define CODEHELP_LEARNING_STL_LIST_H

#endif //CODEHELP_LEARNING_STL_LIST_H
#include "iostream"
#include "list"

using namespace std;

int list1() {
    list<int> l;

    list<int> n(5, 100);
    for(int i : n) {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(2);
    l.push_front(3);

    for( int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase" << endl;
    for(int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of the list-> " << l.size() << endl;
    cout << "capacity of the list-> " << endl;

    return 0;
}