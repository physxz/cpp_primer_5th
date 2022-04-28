/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 18:42:14
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 20:06:23
 * @FilePath: /ch1/1_20.cpp
 * @Description: 
 */

#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item book;
    std::cout << "请输入销售记录：" << std::endl;
    while(std::cin >> book)
        std::cout << "ISBN、售出本数、销售额和平均售价为\n"
                  << book << std::endl;
    return 0;
}