//
// Created by PABITRA KUMAR GHORAI on 31/03/23.
//

#ifndef CODEHELP_LEARNING_PERMUTATIONOFSTRING_H
#define CODEHELP_LEARNING_PERMUTATIONOFSTRING_H

#endif //CODEHELP_LEARNING_PERMUTATIONOFSTRING_H
#include "iostream"
using namespace std;

void permutation(string &str, int i) {
    // base case
    if(i >= str.length()) {
        cout << str << " ";
        return;
    }
    
    // swapping
    for (int j = i; j < str.length(); ++j) {
        //swap
        swap(str[i], str[j]);
        // recursion call
        permutation(str,i+1);
        //backtracking
        swap(str[i], str[j]);
    }
}