#include <bits/stdc++.h>
using namespace std ;

bool checkSubSet (vector<int> arr1, vector<int> arr2) {
    bool flag = false ;
    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
            if (arr2[j] == arr1[i]) {
                flag = true ; 
            }
            else {
                flag = false ; 
            }
        }
    }
    return flag ;
}