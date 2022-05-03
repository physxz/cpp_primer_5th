/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 15:30:51
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 16:01:36
 * @FilePath: /ch3/3_21.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1 size=" << v1.size() << ": ";
    for (auto it1 = v1.cbegin(); it1 != v1.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;

    cout << "v2 size=" << v2.size() << ": ";
    for (auto it1 = v2.cbegin(); it1 != v2.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;

    cout << "v3 size=" << v3.size() << ": ";
    for (auto it1 = v3.cbegin(); it1 != v3.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;

    cout << "v4 size=" << v4.size() << ": ";
    for (auto it1 = v4.cbegin(); it1 != v4.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;

    cout << "v5 size=" << v5.size() << ": ";
    for (auto it1 = v5.cbegin(); it1 != v5.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;

    cout << "v6 size=" << v6.size() << ": ";
    for (auto it1 = v6.cbegin(); it1 != v6.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;

    cout << "v7 size=" << v7.size() << ": ";
    for (auto it1 = v7.cbegin(); it1 != v7.cend(); it1++)
        cout << *it1 << " ";
    cout << endl;
    return 0;
}