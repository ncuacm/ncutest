/**
//  @file main.cc
//  @date 2023-04-02
//  
//  @copyright Copyright (suoni1919@gmail.com) 2023
//  
**/
#include "../../Core/core.hh"
#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

void solve(int T) {

    auto CIN = get_file_as_cin(to_string(T)+".in");
    int n;
    *CIN>>n;
    int sum = 0;
    vector<int> v(n);
    for(auto &x:v){
        *CIN >> x;
    }
    sort(v.begin(), v.end());

    auto file = get_file(to_string(T)+".out");
    for(auto x:v) *file << x <<endl;

}
//

int main() {
	int t;cin >>t;
    for(int i=1;i<=t;i++) solve(i);
    
    return 0;
}