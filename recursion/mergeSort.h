//
// Created by PABITRA KUMAR GHORAI on 29/03/23.
//

#ifndef CODEHELP_LEARNING_MERGESORT_H
#define CODEHELP_LEARNING_MERGESORT_H

#endif //CODEHELP_LEARNING_MERGESORT_H

void merge(int* arr, int s, int e) {
    int mid = (s+e) >> 1;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* arrLeft = new int[len1];
    int* arrRight = new int[len2];

    // copy values
    int k = s;
    // copy left array
    for (int i = 0; i < len1; ++i) {
        arrLeft[i] = arr[k];
        k++;
    }
    // copy right array
    k = mid+1;
    for (int i = 0; i < len2; ++i) {
        arrRight[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2) {
        if(arrLeft[leftIndex] < arrRight[rightIndex]) {
            arr[mainArrayIndex++] = arrLeft[leftIndex++];
        }
        else {
            arr[mainArrayIndex++] = arrRight[rightIndex++];
        }
    }
    // copy logic for rest of the right part
    while(rightIndex < len2) {
        arr[mainArrayIndex++] = arrRight[rightIndex++];
    }
    // copy logic for rest of the left part
    while(leftIndex < len1) {
        arr[mainArrayIndex++] = arrLeft[leftIndex++];
    }

}

void mergeSort(int arr[], int s, int e) {
    // base case
    if(s>=e) {
        return;
    }

    int mid = (s+e) >> 1;
    // divide into 2 parts
    // left part
    mergeSort(arr, s, mid);

    // right part sort
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}