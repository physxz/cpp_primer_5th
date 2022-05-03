/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 20:13:05
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 20:47:12
 * @FilePath: /ch3/3_4.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int size_of_str() {
    string str1, str2;
    while (cin >> str1 >> str2) {
        if (str1 != str2) {
            cout << "不相等" << endl;
            if (str1 > str2)
                cout << str1 << endl;
            else
                cout << str2 << endl;
        } else
            cout << "相等" <<endl;
    }
    return 0;
}

int len_of_str() {
    string str1, str2;
    while (cin >> str1 >> str2) {
        if (str1.size() != str2.size()) {
            cout << "长度不相等" << endl;
            if (str1.size() > str2.size())
                cout << str1 << endl;
            else
                cout << str2 << endl;
        } else
            cout << "相等" << endl;
    }
    return 0;
}

int main() {
    // size_of_str();
    len_of_str();
    return 0;
}