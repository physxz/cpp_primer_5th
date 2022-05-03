/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 21:37:07
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 22:02:06
 * @FilePath: /ch3/3_16.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    int num;
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << "v1: " << v1.size() << ": ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;
    cout << "v2: " << v2.size() << ": ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    cout << "v3: " << v3.size() << ": ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;
    cout << "v4: " << v4.size() << ": ";
    for (int i = 0; i < v4.size(); i++)
        cout << v4[i] << " ";
    cout << endl;
    cout << "v5: " << v5.size() << ": ";
    for (int i = 0; i < v5.size(); i++)
        cout << v5[i] << " ";
    cout << endl;
    cout << "v6: " << v6.size() << ": ";
    for (int i = 0; i < v6.size(); i++)
        cout << v6[i] << " ";
    cout << endl;
    cout << "v7: " << v7.size() << ": ";
    for (int i = 0; i < v7.size(); i++)
        cout << v7[i] << " ";
    cout << endl;
    return 0;
}