/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 10:54:17
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 12:37:52
 * @FilePath: /ch1/1_5.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    std::cout << "Enter a number: ";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1*v2;
    std::cout << std::endl;
    return 0;
}