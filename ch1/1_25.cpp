/*
 * @Author: 赵小鑫
 * @Date: 2022-04-28 09:00:43
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-28 12:17:59
 * @FilePath: /1_25.cpp
 * @Description: 
 */

#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item total, trans;
    if(std::cin >> total){
        while(std::cin >> trans){
            if(trans.isbn() == total.isbn()){
                total += trans;
            }
            else{
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else{
        std::cerr << "无销售记录" << std::endl;
        return -1;
    }
    return 0;
}