/*
 * @Author: 赵小鑫
 * @Date: 2022-05-01 22:26:07
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-01 23:06:25
 * @FilePath: /ch3/3_20.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec;
    int num;
    while (cin >> num)
        ivec.push_back(num);
    for (int i = 0; i < ivec.size(); i++)
        cout << ivec[i] + ivec[i+1] << " ";
    cout << endl;
    //
    for (int i = 0; i < ivec.size(); i++) {
        cout << ivec[i] + ivec[ivec.size()-i-1] << " ";
    }
    cout << endl;
    return 0;
}