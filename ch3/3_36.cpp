/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 10:55:14
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 11:47:07
 * @FilePath: /ch3/3_36.cpp
 * @Description: 
 */

#include <iostream>
#include <vector>
using namespace std;

int arr_ifequal() {
    int ia1[] = {1,2,3,4,5};
    int ia2[] = {1,2,3,4,5};
    int *beg1 = begin(ia1), *last1 = end(ia1);
    int *beg2 = begin(ia2), *last2 = end(ia2);
    if (last2-beg2 == last1-beg1) {
        cout << "两数组元素个数均为" << last1 - beg1 << "个" << endl;
        while (beg1 != last1 && beg2 != last2) {
            if (*beg1 != *beg2) {
                cout << "两个数组不相等" << endl;
                return -1;
            }
            else
                cout << "两个数组相等" << " ";
            beg1++;
            beg2++;
        }
        cout << endl;
        cout << "两个数组元素全部相等" << endl;
    } else
        cout << "数组元素个数不同，不相等" << endl;
    return 0;
}

int vect_ifequal(){
    vector<int> ivec1 = {1,2,3,4,5};
    vector<int> ivec2 = {1,2,3,4,9};
    auto beg1 = ivec1.begin(), end1 = ivec1.end();
    auto beg2 = ivec2.begin(), end2 = ivec2.end();
    while (beg1 != end1 && beg2 != end2) {
        if (*beg1 != *beg2) {
            cout << "两个vector不相等" << endl;
            return -1;
        } else
            cout << "两个vector元素相等" << " ";
        cout << endl;
        beg1++; beg2++;
    }
    cout << "两个vector相等" << endl;
    return 0;
}

int main() {
    // arr_ifequal();
    vect_ifequal();
    return 0;
}