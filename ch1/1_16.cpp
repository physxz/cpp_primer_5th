/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 16:15:50
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 16:19:26
 * @FilePath: /ch1/1_16.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    int value = 0, sum = 0;
    while(std::cin >> value)
        sum += value;
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}