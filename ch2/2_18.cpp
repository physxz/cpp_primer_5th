/*
 * @Author: 赵小鑫
 * @Date: 2022-04-29 00:26:44
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-29 03:47:34
 * @FilePath: /ch2/2_18.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    int i = 5, j = 10, *p = &i;
    std::cout << "地址 " << p << "值 " << *p << std::endl;
    p = &j;  // 将j的地址赋给指针p，即指针指向了j
    std::cout << "地址 " << p << "值 " << *p << std::endl;
    *p = 20; // 给p指向的对象赋值，即j=20
    std::cout << "地址 " << p << "值 " << *p << std::endl;
    j = 30;  // 当前p指向j,修改j的值即修改*p
    std::cout << "地址 " << p << "值 " << *p << std::endl;
    return 0;
}