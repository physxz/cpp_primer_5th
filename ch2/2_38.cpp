/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 04:35:59
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 04:45:40
 * @FilePath: /ch2/2_38.cpp
 * @Description: 
 */

#include <iostream>
#include <typeinfo>
int main(){
    int a = 3;
    auto c1 = a;
    decltype(a) c2 = a;
    decltype((a)) c3 = a;

    const int d = 5;
    auto f1 = d;
    decltype(d) f2 = d;

    std::cout << typeid(c1).name() << std::endl;
    std::cout << typeid(c2).name() << std::endl;
    std::cout << typeid(c3).name() << std::endl;
    std::cout << typeid(f1).name() << std::endl;
    std::cout << typeid(f2).name() << std::endl;

    c1++;
    c2++;
    c3++;
    f1++;      // 正确：auto推断类型自动忽略掉顶层const
    // f2++;   // 错误：decltype则保留顶层const，所以f2是整型常量
    std::cout << a << " " << c1 << " " << c2 << " "
              << c3 << " " << f1 << " " << f2 << " "
              << std::endl;
    return 0;
}