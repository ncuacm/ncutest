/**
//  @file non_repeating_integer_sequence.cc
//  @author SuoNi Chan (suoni1919@gmail.com)
//  @date 2023-03-28
//  
//  @copyright Copyright (SuoNi Chan) 2023
//  
**/
#include "../../Core/core.hh"
#include <bits/stdc++.h> 
using namespace std;
using ll = long long;



int main() {
	int T;
    cin >> T;
    for(int i=1; i<=T;i++) {
        auto file = get_file(to_string(i) + ".in");
        int N = get_int(0, 1e5);
        *file << N <<endl;
        vector<int> v = get_non_repeating_int_seq(N, 10, 1000000);
        for(auto x:v) {
            *file << x <<endl;
        }
    }

    return 0;
}