/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 22:43:22
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 23:06:39
 * @FilePath: /ch3/3_32.cpp
 * @Description: 
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec, ivec2;
    for (int i = 0; i < 10; i++)
        ivec.push_back(i);
    for (auto i: ivec)
        cout << i << " ";
    cout << endl;
    // 拷贝vector并打印
    for (int i = 0; i < 10; i++)
        ivec2.push_back(ivec[i]);
    for (auto i: ivec2)
        cout << i << " ";
    cout << endl;
    return 0;
}