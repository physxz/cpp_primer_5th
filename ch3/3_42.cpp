/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 17:00:48
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 17:03:00
 * @FilePath: /ch3/3_42.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int ac[5];
    vector<int> ivec{1,20,3,4,5};
    for (auto i: ivec)
        ac[i] = ivec[i];
    for (auto i: ac)
        cout << i << " ";
    cout << endl;
    return 0;
}