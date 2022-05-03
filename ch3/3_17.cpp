/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 22:05:38
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 22:21:43
 * @FilePath: /ch3/3_17.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string word;
    vector<string> svec;
    while (cin >> word)
        svec.push_back(word);
    for (auto &mem: svec) {
        for (auto &c: mem)
            c = toupper(c);
        cout << mem << endl;
    }
    return 0;
}