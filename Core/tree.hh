#pragma once

#include <bits/stdc++.h>
using namespace std;
template <typename T>
struct node{
    T val;
    int index = 0;
    int left_index = 0;
    int right_index = 0; 
};

template <class T>
class Tree {
    vector<node<T>> node_lists;
    int size = 0;
    Tree(int _size) {
        this->size = _size;
    }


    void bulid_tree() {
        
    }


};