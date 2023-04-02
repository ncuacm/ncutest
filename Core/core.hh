/**
//  @file core.hh
//  @author SuoNi Chan (suoni1919@gmail.com)
//  @date 2023-03-28
//  常用核心API
//  @copyright Copyright (SuoNi Chan) 2023
//  
**/
#pragma once
#include <bits/stdc++.h>
using namespace std;

int const MAX = INT_MAX;
int const MIN = INT_MIN;

//获得l <= int <= r
int get_int(int l, int r) {
    std::random_device rd;  // 获取一个随机数种子
    std::mt19937 gen(rd());  // 以随机数种子创建一个 Mersenne Twister 引擎
    std::uniform_int_distribution<> dis(l, r);
    return dis(gen);
}
//获得INT_MIN <= int <= INT_MAX
int get_int() {
    std::random_device rd;  // 获取一个随机数种子
    std::mt19937 gen(rd());  // 以随机数种子创建一个 Mersenne Twister 引擎
    std::uniform_int_distribution<> dis(INT_MIN, INT_MAX);
    return dis(gen);
}
//获得 int >= 0
int get_non_neg_int() { 
    std::random_device rd;  // 获取一个随机数种子
    std::mt19937 gen(rd());  // 以随机数种子创建一个 Mersenne Twister 引擎
    std::uniform_int_distribution<> dis(0, INT_MAX);
    return dis(gen);
}


//获得double
double get_double(double l, double r) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(l, r);
    double rand_num = dis(gen);
    return rand_num;
}
double get_double() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(DBL_MIN, DBL_MAX);
    double rand_num = dis(gen);
    return rand_num;
}
//获得非负double
double get_non_neg_double () {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0, DBL_MAX);
    double rand_num = dis(gen);
    return rand_num;
}

//获得一个不重复的整数序列
vector<int> get_non_repeating_int_seq(int size) {
    vector<int> ret;
    map<int,bool> m;
    while(size--) {
        int tem;
        while (m[tem = get_int()]) {
            tem = get_int();
        }
        m[tem] = true;
        ret.push_back(tem);
    }
    return ret;
}

//获得一个不重复的整数序列，范围为l ~ r
vector<int> get_non_repeating_int_seq(int size, int l, int r) {
    vector<int> ret;
    map<int,bool> m;
    while(size--) {
        int tem;
        while (m[tem = get_int(l, r)]) {
            tem = get_int(l,r);
        }
        m[tem] = true;
        ret.push_back(tem);
    }
    return ret;
}

//获得一个不重复的double序列
vector<double> get_non_repeating_db_seq(int size) {
    vector<double> ret;
    map<double, bool> m;
    while(size--) {
        double tem;
        while(m[tem = get_double()]) {
            tem = get_double();
        }
        m[tem] = true;
        ret.push_back(tem);
    }
    return ret;
}

//获得一个不重复的double序列 范围l ~ r
vector<double> get_non_repeating_db_seq(int size,double l, double r) {
    vector<double> ret;
    map<double, bool> m;
    while(size--) {
        double tem;
        while(m[tem = get_double(l,r)]) {
            tem = get_double(l,r);
        }
        m[tem] = true;
        ret.push_back(tem);
    }
    return ret;
}

//文件指针
shared_ptr<ofstream> get_file(string f_name) {
    shared_ptr<ofstream> p = make_shared<ofstream>(f_name);
    return p;
} 

shared_ptr<ifstream> get_file_as_cin(string f_name) {
    shared_ptr<ifstream> p = make_shared<ifstream>(f_name);
    return p;
}