/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 21:54:05
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 23:07:03
 * @FilePath: /ch3/3_31.cpp
 * @Description: 
 */

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int arr2[10];
    for (int i = 0; i < 10; i++)
        arr[i] = i;
    for (auto i: arr)
        cout << i << " ";
    cout << endl;
    // 拷贝并打印
    for (int i = 0; i < 10; i++)
        arr2[i] = arr[i];
    for (auto i: arr)
        cout << i << " ";
    cout << endl;
    return 0;
}