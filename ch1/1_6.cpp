/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 10:58:33
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 12:38:06
 * @FilePath: /ch1/1_6.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    std::cout << "Enter a number: ";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The product of " << v1;
              << " and " << v2;
              << " is " << v1*v2 << std::endl;
    return 0;
}