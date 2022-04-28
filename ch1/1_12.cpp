/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 15:06:46
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 15:33:36
 * @FilePath: /ch1/1_12.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    int sum = 0;
    for (int i = -100; i <= 100; i++)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}