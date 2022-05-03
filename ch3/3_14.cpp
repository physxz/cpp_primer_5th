/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 15:51:53
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 20:28:31
 * @FilePath: /ch3/3_14.cpp
 * @Description: 
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector<int> ivect;
    while (cin >> num) {
        ivect.push_back(num);
        for (auto &i: ivect)
            cout << i << " ";
    }
    return 0;
}