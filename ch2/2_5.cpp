/*
 * @Author: 赵小鑫
 * @Date: 2022-04-28 20:39:13
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-28 22:29:57
 * @FilePath: /ch2/2_5.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    std::cout << "2\x4d\012" << std::endl;
    std::cout << "2\t\x4d\012" << std::endl;
    return 0;
}