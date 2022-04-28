/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 20:17:28
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 20:28:56
 * @FilePath: /ch1/1_22.cpp
 * @Description: 
 */

#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item, total;
    std::cout << "请输入多条ISBN相同的销售记录：" << std::endl;
    while(std::cin >> item)
        total += item;
    std::cout << "售出本数、销售额和平均售价为\n"
              << total << std::endl;
    return 0;
}