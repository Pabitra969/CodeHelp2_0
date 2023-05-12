//
// Created by PABITRA KUMAR GHORAI on 31/03/23.
//

#ifndef CODEHELP_LEARNING_MAZESOLVER_H
#define CODEHELP_LEARNING_MAZESOLVER_H

#endif //CODEHELP_LEARNING_MAZESOLVER_H
#include "iostream"
#include "vector"
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> &visited) {
    if( ((i>=0 && i < row) && (j >= 0 && j< col)) &&
        (arr[i][j] == 1 ) &&
        (visited[i][j]==false)) {
        return true;
    }
    else {
        return false;
    }
}
//bal ar UEM
void mazeSolver(int arr[][3], int row, int col, int i, int j, vector<vector<bool> > &visited, vector<string> &path, string output) {
    //base case
    if(i == row - 1 && j == col - 1) {
        // answer store
        path.push_back(output);
        return;
    }

    // 1 case have to solve ->

    // down -> i+1, j
    if(isSafe(i+1, j, row, col, arr, visited)) {
        visited[i+1][j] = true;
        mazeSolver(arr, row, col, i+1, j, visited, path, output + 'D');
        //backtrack
        visited[i+1][j] = false;
    }
    // left -> i, j-1
    if(isSafe(i, j-1, row, col, arr, visited)) {
        visited[i][j-1] = true;
        mazeSolver(arr, row, col, i, j-1, visited, path, output + 'L');
        //backtrack
        visited[i+1][j] = false;
    }
    // right -> i, j+1
    if(isSafe(i, j+1, row, col, arr, visited)) {
        visited[i+1][j] = true;
        mazeSolver(arr, row, col, i+1, j, visited, path, output + 'R');
        //backtrack
        visited[i][j+1] = false;
    }
    //up -> i-1, j
    if(isSafe(i-1, j, row, col, arr, visited)) {
        visited[i+1][j] = true;
        mazeSolver(arr, row, col, i+1, j, visited, path, output + 'U');
        //backtrack
        visited[i-1][j] = false;
    }
}