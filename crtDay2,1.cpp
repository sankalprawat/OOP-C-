// WAP to convert array to number 
#include <bits/stdc++.h>
using namespace std ;

int arrayToNumber (vector<int> nums) {
    int size = nums.size() ;
    int res ;
    for (int num : nums) {
        res = res*10+nums[num] ;
    }
    return res + 1 ;
}

int main () {
    
    return 0 ;
}