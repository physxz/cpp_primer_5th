/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 14:18:37
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 14:36:10
 * @FilePath: /ch3/3_8.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int while_form() {
    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); i++)
            str[i] = 'X';
        cout << str << endl;
    }
    return 0;
}

int for_form() {
    string str;
    while (getline(cin, str)) {
        int i = 0;
        while (i < str.size()) {
            str[i] = 'X';
            i++;
        }
        cout << str << endl;
    }
    return 0;
}

int main() {
    while_form();
    // for_form();
    return 0;
}