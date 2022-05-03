/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 13:47:59
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 14:13:13
 * @FilePath: /ch3/3_7.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        for (char &c: str)    // 有引用符&时可以改变，无引用符时不能改变
            c = 'X';          // c只是引用，X字符用单引号
        cout << str << endl;  // 被改变的是原字符串
    }
    return 0;
}