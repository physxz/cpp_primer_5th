/*
 * @Author: 赵小鑫
 * @Date: 2022-04-28 12:35:49
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-28 20:38:40
 * @FilePath: /ch2/2_3.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 30
    std::cout << u - u2 << std::endl; //4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32
    std::cout << i - u << std::endl;  // 0
    std::cout << u - i << std::endl;  // 0
}