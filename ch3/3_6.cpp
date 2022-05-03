/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 13:32:43
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 14:13:51
 * @FilePath: /ch3/3_6.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        for (auto &c: str)    // 有无引用符&都可以改变
            c = 'X';          // c只是引用，X字符用单引号
        cout << str << endl;  // 被改变的是原字符串
    }
    return 0;
}