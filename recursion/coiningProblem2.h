//
// Created by PABITRA KUMAR GHORAI on 25/03/23.
//

#ifndef CODEHELP_LEARNING_COININGPROBLEM2_H
#define CODEHELP_LEARNING_COININGPROBLEM2_H

#endif //CODEHELP_LEARNING_COININGPROBLEM2_H
#include "iostream"
#include "vector"
#include "limits.h"
using namespace std;

int solve2 (vector<int>&v, int target) {
    // base case
    if(target == 0) {
        return 0;
    }
    if(target < 0) {
        return INT_MAX;
    }

    // Let's solve 1 case for only by one value of the vector
    int mini = INT_MAX;
    int ans = solve2(v, target - v[0]);
    if(ans != INT_MAX)
        return min(ans+1, mini);
    return -1;
}