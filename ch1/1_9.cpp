/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 12:10:33
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 12:38:39
 * @FilePath: /ch1/1_9.cpp
 * @Description: 
 */


#include <iostream>
int main(){
    int sum = 0, i = 50;
    while(i <= 100){
        sum += i;
        i++;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
}