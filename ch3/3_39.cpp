/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 12:08:09
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 15:41:51
 * @FilePath: /ch3/3_39.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int str_obj() {
    string str1 = "hello world.";
    string str2 = "hello world!";
    if (str1 > str2)
        cout << "第一个对象大于第二个对象" << endl;
    else if (str1 < str2)
        cout << "第一个对象小于第二个对象" << endl;
    else
        cout << "两个对象相等" << endl;
    return 0;
}

int c_obj() {
    // 必须加空字符，否则两个数组即使一模一样得到的结果也不相等
    const char ac1[] = {'a','b','c','d','\0'};
    const char ac2[] = {'a','b','c','d','\0'}; 
    auto result = strcmp(ac1, ac2);
    if (result > 0)
        cout << "第一个对象大于第二个对象" << endl;
    else if (result < 0)
        cout << "第二个对象大于第一个对象" << endl;
    else
        cout << "两个对象相等" << endl;
    return 0;
}

int main() {
    // str_obj();
    c_obj();
    return 0;
}