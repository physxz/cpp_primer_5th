/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 16:55:26
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 16:57:56
 * @FilePath: /ch3/3_41.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    const int ac[] = {1,2,3,4,5};
    vector<int> ivec(begin(ac), end(ac));
    for (auto i: ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}