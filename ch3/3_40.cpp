/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 15:43:17
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 16:26:09
 * @FilePath: /ch3/3_40.cpp
 * @Description: 
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ac1[] = "welcome to ";
    char ac2[] = "harbin";
    char ac3[strlen(ac1) + strlen(ac2)];
    strcpy(ac3, ac1);  // 将第一个字符串拷贝到字符数组中
    strcat(ac3, ac2);  // 将第一个字符串拼接到字符数组中
    for (auto i: ac3)
        cout << i;
    cout << endl;
    return 0;
}