#include<bits/stdc++.h>
using namespace std ;

vector<int> reverseVector(int numElements, int startingNumber) {
    vector<int> nums ;
    for (int i = startingNumber; i < startingNumber + numElements ; i++) {
        nums.push_back(i) ;
    }
    int size = nums.size() ;
    for (int i = 0; i < size / 2 ; i++) {
        swap(nums[i], nums[size - i - 1]) ;
    }

    return nums ;
}

int main () {
    int size = 4 ;
    int num = 6 ;

    vector<int> res = reverseVector(size, num) ;

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " " ;
    }

    return 0 ;
}