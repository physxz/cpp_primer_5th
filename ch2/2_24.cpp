/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 01:48:05
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 02:00:48
 * @FilePath: /ch2/2_24.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    const auto &h = 42;
    const auto &j = 42;
    std::cout << a << " " << b << " " << c << " "
              << d << " " << e << " " << g << std::endl;
    a = 42;
    b = 42;
    c = 42;
    // d = 42;  // 错误，可改为 *d = 42;
    // e = 42;  // 错误
    // g = 42;  // 错误
    std::cout << a << " " << b << " " << c << " "
              << d << " " << e << " " << g << std::endl;
    return 0;
}