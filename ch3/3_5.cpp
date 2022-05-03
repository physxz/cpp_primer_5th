/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 21:17:10
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 22:31:34
 * @FilePath: /ch3/3_5.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string totStr, str;
    if (cin >> totStr) {
        while (cin >> str) {
            totStr += (" " + str);
            cout << totStr << endl;
        }
    }
    return 0;
}