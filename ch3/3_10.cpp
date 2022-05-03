/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 14:41:19
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 15:08:24
 * @FilePath: /ch3/3_10.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        for (auto &c: str) {
            if (!ispunct(c))
                cout << c;
        }
        cout << endl;
    }
    return 0;
}