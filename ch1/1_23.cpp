/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 20:30:57
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-28 12:30:58
 * @FilePath: /1_23.cpp
 * @Description: 终端输入 ./1_23 < book_sales
 */

#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item currItem, valItem;
    int cnt = 1;
    std::cout << "请输入若干销售记录："
              << std::endl;
    if(std::cin >> currItem){
        while(std::cin >> valItem){
            if(currItem.isbn() == valItem.isbn())
                cnt++;
            else{
                std::cout << currItem.isbn() << "共有"
                          << cnt << "条销售记录"
                          << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        std::cout << currItem.isbn() << "共有"
                          << cnt << "条销售记录"
                          << std::endl;
    } else {
        std::cerr << "没有数据输入" << std::endl;
        return -1;
    }
    return 0;
}