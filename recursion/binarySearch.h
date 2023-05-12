//
// Created by PABITRA KUMAR GHORAI on 24/03/23.
//

#ifndef CODEHELP_LEARNING_BINARYSEARCH_H
#define CODEHELP_LEARNING_BINARYSEARCH_H

#endif //CODEHELP_LEARNING_BINARYSEARCH_H

#include "iostream"
#include "vector"
using namespace std;

void binarySearch(vector<int>& v, int s, int e, int& key) {
    //base case
    if (s > e) {
        cout<<"Not found"<<endl;
        return;
    }
    int mid = (s+e)>>1;
    // one step
    if(key == v[mid]) {
        cout<<"Fount at index -> "<<mid<<endl;
        return;
    }
    // left search
    if(v[mid] > key) {
        return binarySearch(v,s,mid-1,key);
    }
    // right search
    if(v[mid] < key) {
        return binarySearch(v, mid+1, e, key);
    }
}