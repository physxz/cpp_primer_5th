/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 16:22:11
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 16:51:23
 * @FilePath: /ch3/3_22.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// range for 语句
// int main() {
//     vector<string> text;
//     string str;
//     while (getline(cin, str))
//         text.push_back(str);
//     for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
//         for (auto &i: *it)
//             i = toupper(i);
//         cout << *it << endl;
//     }
//     return 0;
// }

// 嵌套迭代器
int main() {
    vector<string> text;
    string str;
    while (getline(cin, str))
        text.push_back(str);
    for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
        for (auto it2 = it->begin(); it2 != it->end(); it2++)
            *it2 = toupper(*it2);
        cout << *it << endl;;
    }
    return 0;
}