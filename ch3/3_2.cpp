/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 19:43:25
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 20:09:24
 * @FilePath: /ch3/3_2.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int readLine() {
    string line;
    while (getline(cin, line))
        cout << line << endl;
    return 0;
}

int readWord() {
    string word;
    while (cin >> word)
        cout << word << endl;
    return 0;
}

int main() {
    // readLine();
    readWord();
    return 0;
}