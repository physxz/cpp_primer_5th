/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 02:34:35
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 04:36:55
 * @FilePath: /ch2/2_35.cpp
 * @Description: 打印出i意味着整型，PKi意味着指向整型常量的指针
 */

#include <iostream>
#include <typeinfo>
int main(){
    const int i = 42;
    auto j = i;          // j是整型常量
    const auto &k = i;   // k是整型常量i的别名
    auto *p = &i;        // p是指向整型常量的指针
    const auto j2 = i, &k2 = i;  // j2是整型常量，k2是整型常量i的别名
    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;
    return 0;
}