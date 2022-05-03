/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 20:19:53
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 20:28:09
 * @FilePath: /ch3/3_15.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string word;
    vector<string> svec;
    while (cin >> word) {
        svec.push_back(word);
        for (auto &w: svec)
            cout << w << " ";
    }
    return 0;
}