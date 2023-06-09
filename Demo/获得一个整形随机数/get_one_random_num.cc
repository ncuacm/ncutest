/**
//  @file get_one_random_num.cc
//  @author SuoNi Chan (suoni1919@gmail.com)
//  @date 2023-03-28
//  获得一个随机数
//  @copyright Copyright (SuoNi Chan) 2023
//  
**/

#include "../../Core/core.hh"
#include<bits/stdc++.h>
using namespace std;


/**
//  @in 无
    @out 返回一个随机数字 (范围：0 ~ int_max)

    @example
    in:
    out:
    5

    @example
    in:
    out:
    99

    @example
    in:
    out:
    1450
//  
**/

int main () {

    cout << "请选择生成文件的份数:" << endl;
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++) {
        auto file = get_file(to_string(i)+".in");
        *file << get_int();
    }
    return 0;
}