/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 20:17:28
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-28 12:30:46
 * @FilePath: /1_22.cpp
 * @Description: 终端输入 ./1_22 < same_isbn_sales
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