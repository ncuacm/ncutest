/**
//  @file main.cc
//  @date 2023-04-02
//  
//  @copyright Copyright (suoni1919@gmail.com) 2023
//  
**/
#include "../Core/core.hh"
#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

void solve() {
    vector<int> v = get_non_repeating_int_seq(99, 101, 200);
    int sum = 0;
    for(auto x:v) {
        sum += x;
    }
    cout<<sum;
}
//

int main() {
//	ll T;cin>>T;while(T--)
    solve();
    
    return 0;
}