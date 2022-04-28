/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 12:36:36
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 15:39:19
 * @FilePath: /ch1/1_11.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    int v1 = 0, v2 = 0;
    std::cout << "请输入两个整数（先小后大）：" << std::endl;
    std::cin >> v1 >> v2;
    while(v1 <= v2)
        std::cout << v1++ << " ";
    std::cout << std::endl;
    return 0;
}