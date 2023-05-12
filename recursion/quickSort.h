//
// Created by PABITRA KUMAR GHORAI on 29/03/23.
//

#ifndef CODEHELP_LEARNING_QUICKSORT_H
#define CODEHELP_LEARNING_QUICKSORT_H

#endif //CODEHELP_LEARNING_QUICKSORT_H
#include "iostream"
using namespace std;

int partition(int arr[], int s, int e) {
    // step1 : choose pivotElement
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2 : count the elements smaller than the pivotElement
    int count = 0;
    for (int i = s+1; i <= e ; i++) {
        if(arr[i] <= pivotElement) {
            count++;
        }
    }

    //step 3 : place the pivotElement to it's right position
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // left small element & right larger element
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivotElement) {
            i++;
        }
        while(arr[j] > pivotElement) {
            j--;
        }

        // here can be 2 cases
        // case1 -> every element is in it's right place
        // case2 -> some element is not in it's right place

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort (int* arr, int s, int e) {
    //base case
    if(s >= e) {
        return;
    }

    // partition logic
    int p = partition(arr, s, e);

    //recursive calls
    //left
    quickSort(arr, s, p-1);
    //right
    quickSort(arr,p+1, e);
}
