//
// Created by PABITRA KUMAR GHORAI on 04/04/23.
//

#ifndef CODEHELP_LEARNING_STL_STACK_H
#define CODEHELP_LEARNING_STL_STACK_H

#endif //CODEHELP_LEARNING_STL_STACK_H

#include "iostream"
#include "stack"

using namespace std;

int stack1() {
    stack<string> s;
    s.push("Love");
    s.push("Babbar");
    s.push("kumar");

    cout << "Top element->" << s.top() << endl;

    s.pop();
    cout << "Top element->" << s.top() << endl;
    cout<< "size of stack-> " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl; // to delete every element of the stack

}