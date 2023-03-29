/**
//  @file non_repeating_double_sequence.cc
//  @author SuoNi Chan (suoni1919@gmail.com)
//  @date 2023-03-29
//  
//  @copyright Copyright (SuoNi Chan) 2023
//  
**/

#include "../../Core/core.hh"
#include <bits/stdc++.h>
using namespace std;


int main () {
    int T;
    cin >> T;
    for(int i=1; i<=T;i++) {
        auto file = get_file(to_string(i) + ".in");
        int N = get_int(10,99);
        *file << N <<endl;
        vector<double> v = get_non_repeating_db_seq(N, -100, 100);
        for(auto x:v) {
            *file << x <<endl;
        }
    }
}