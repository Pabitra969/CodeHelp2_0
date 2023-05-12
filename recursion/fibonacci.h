//
// Created by PABITRA KUMAR GHORAI on 10/03/23.
//

#ifndef CODEHELP_LEARNING_FIBONACCI_H
#define CODEHELP_LEARNING_FIBONACCI_H

#include "iostream"
using namespace std;


int fibonacci(int n) {
    if(n == 1 || n == 0) {
        return n;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}


#endif //CODEHELP_LEARNING_FIBONACCI_H
