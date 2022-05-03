/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 19:02:52
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 19:39:32
 * @FilePath: /ch3/3_24.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fir() {
    vector<int> ivec;
    int num;
    while (cin >> num)
        ivec.push_back(num);
    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        *it = *it + *(it + 1);
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

int sec(){
    vector<int> ivec;
    int num;
    while (cin >> num)
        ivec.push_back(num);
    auto beg = ivec.begin(), end = ivec.end();
    auto mid = beg + (end-beg) / 2;
    for (auto it = beg; it != mid; it++) {
        *it = *it + *(beg + (end-it) - 1);
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

int main(){
    // fir();
    sec();
    return 0;
}