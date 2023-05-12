//
// Created by PABITRA KUMAR GHORAI on 11/03/23.
//

#ifndef CODEHELP_LEARNING_STAIRS_H
#define CODEHELP_LEARNING_STAIRS_H

#endif //CODEHELP_LEARNING_STAIRS_H
#include <iostream>
using namespace std;

int stairpossibleways(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return stairpossibleways(n-1) + stairpossibleways(n-2);
}