//
// Created by PABITRA KUMAR GHORAI on 08/03/23.
//

#ifndef CODEHELP_LEARNING_ISISOMORPHIC_H
#define CODEHELP_LEARNING_ISISOMORPHIC_H

#endif //CODEHELP_LEARNING_ISISOMORPHIC_H
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    int hash[256] = {0}; // maping of each char of language 's' to language 't'
    int isCharMapped[256] = {0}; // stores if t[i] char already mapped with s[i]

    for(int i=0; i<s.size(); i++) {
        if(hash[s[i]] == 0 && isCharMapped[t[i]] == 0){
            hash[s[i]] = t[i];
            isCharMapped[t[i]] = true;
        }
        else if(hash[s[i]] != 0 && isCharMapped[t[i]] != 0){
            if(char(hash[s[i]] == t[i])) {
                continue;
            }
            else{
                return false;
            }
        }
        else {
            return false;
        }
    }
    return true;
}