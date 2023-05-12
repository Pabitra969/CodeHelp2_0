//
// Created by PABITRA KUMAR GHORAI on 27/03/23.
//

#ifndef CODEHELP_LEARNING_CUTINTONPIECES_H
#define CODEHELP_LEARNING_CUTINTONPIECES_H

#endif //CODEHELP_LEARNING_CUTINTONPIECES_H
#include "iostream"
#include "vector"
using namespace std;

int maxPieces (int n, int x, int y, int z) {
    // base case
    if(n==0) {
        return 0;
    }
    if(n<0) {
        return INT_MIN;
    }

    // solve 1 case
    int ansX=0, ansY=0, ansZ=0;
    ansX = maxPieces(n-x, x, y, z)+1;
//    ansY = maxPieces(n-y, x, y, z)+1;
//    ansZ = maxPieces(n-z, x, y, z)+1;

    int max1 = max(ansX,max(ansY,ansZ));
    return max1;
}