//
// Created by PABITRA KUMAR GHORAI on 12/03/23.
//

#ifndef CODEHELP_LEARNING_SUBSEQUENCEOFSTRING_H
#define CODEHELP_LEARNING_SUBSEQUENCEOFSTRING_H

#endif //CODEHELP_LEARNING_SUBSEQUENCEOFSTRING_H
#include "iostream"
using namespace std;

void subSequenceOfString(string str, int i, string output) {
    if(i >= str.length()) {
        cout << output << endl;
        return;
    }
    // include
    output.push_back(str[i]);
    subSequenceOfString(str, i+1, output);
    output.pop_back();
    // exclude
    subSequenceOfString(str, i+1, output);

}