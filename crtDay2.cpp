#include<bits/stdc++.h>
using namespace std ;

int maxProfit (vector<int> days, vector<int> stock) {
    vector<int> profitPerDay ;
    int maxProfit = -1 ;
    for (int i = 0; i < days.size() - 1; i++) {
        int dayDiff = days[i+1] - days[i] ; 
        int stockDiff = stock[i+1] - stock[i] ;
        int profit = stockDiff/dayDiff ;
        profitPerDay.push_back(profit) ;
    }
    int n = profitPerDay.size() ;
    sort(profitPerDay.begin(), profitPerDay.end()) ;
    return profitPerDay[n-1] ;
    
}

int main () {
    vector<int> days = {2,13,14,17,23} ;
    vector<int> stock = {2,5,9,1,13} ;
    
    cout << maxProfit(days, stock) << endl ;
    
    return 0 ;
 }