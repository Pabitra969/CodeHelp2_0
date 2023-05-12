//
// Created by PABITRA KUMAR GHORAI on 05/03/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cooksRanks, int nP, int mid) {
    int cR = 0;
    int totalTime = 0;
    int totalP = 1;
    for(int i = 1; i<=nP; i++) {
        if(totalTime + cooksRanks[cR] * totalP > mid) {
            cR++;
            if(cR == cooksRanks.size()) {
                return false;
            }
            totalP = 1;
            totalTime = cooksRanks[cR] * totalP;
            totalP++;
        }
        else {
            totalTime += cooksRanks[cR] * totalP;
            totalP++;
        }
    }
    return true;
}

int minTimeToCompleteOrder(vector<int> cooksRanks, int nP, int nC) {
    int start = 0;
    int end = *max_element(cooksRanks.begin(), cooksRanks.end())*nP*(nP+1)/2;
    int ans = -1;

    while(start <= end) {
        int mid = (start+end) >> 1;
        if(isPossibleSolution(cooksRanks, nP, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int T; cin >> T;
    while(T--) {
        int nP, nC;
        cin >> nP >> nC;
        vector<int> cooksRanks;
        while(nC--) {
            int R; cin >> R;
            cooksRanks.push_back(R);
        }

        cout << minTimeToCompleteOrder(cooksRanks, nP, nC) << endl;
    }
    return 0;
}