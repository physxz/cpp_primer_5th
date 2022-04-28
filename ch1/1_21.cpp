/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 18:54:58
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 20:28:26
 * @FilePath: /ch1/1_21.cpp
 * @Description: 
 */

#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1, item2;
    std::cout << "请输入两条ISBN相同的销售记录：" << std::endl;
    std::cin >> item1 >> item2;
    std::cout << "ISBN、售出本数、销售额和平均售价为\n"
              << item1 + item2 << std::endl;
    return 0;
}