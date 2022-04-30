/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 15:06:14
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 15:10:30
 * @FilePath: /ch2/Sales_data.h
 * @Description: 
 */

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif