/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 16:52:40
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 17:00:18
 * @FilePath: /ch3/3_23.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec(10);
    int num = 0;
    for (int i = 0; cin >> num && i != ivec.size(); i++)
        ivec[i] = num;
    for (auto it = ivec.begin(); it != ivec.end(); it++)
        cout << (*it) * 2 << " ";
    return 0;
}