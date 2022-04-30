/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 09:05:55
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 15:09:15
 * @FilePath: /ch2/2_42.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include "Sales_data.h"

// 2.6.2节例子，输出两个Sales_data对象的和
int example() {
    
    // 添加两个Sales_data对象
    Sales_data data1, data2;
    
    // 读入data1和data2的代码
    double price = 0;    // 单价，用于计算销售收入
    // 读入第1笔交易：ISBN、销售数量、单价
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    //计算销售收入
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    // 检查data1和data2的ISBN是否相同的代码，如果相同，求data1和data2的总和
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        // 输出：ISBN、总销售量、总销售额、平均价格
        std::cout << data1.bookNo << " " << totalCnt
                  << " " << totalRevenue << " ";
        if(totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN"
                  << std::endl;
        return -1;
    }
}

// 读取一组书籍销售记录，将每条记录打印到标准输出上
int ex2_0() {
    Sales_data data;
    double price = 0.0;
    while(std::cin >> data.bookNo >> data.units_sold >> price) {
        data.revenue = data.units_sold * price;
        std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << std::endl;
    }
    return 0;
}

// 读取两个ISBN相同的Sales_data对象，输出他们的和
int ex2_1() {
    Sales_data data1, data2;
    double price = 0.0;
    if (std::cin >> data1.bookNo >> data1.units_sold >> price) {
        data1.revenue = data1.units_sold * price;
        if (std::cin >> data2.bookNo >> data2.units_sold >> price) {
            data2.revenue = data2.units_sold * price;
            if (data1.bookNo == data2.bookNo) {
                unsigned totSold = data1.units_sold + data2.units_sold;
                double totRevenue = data1.revenue + data2.revenue;
                std::cout << data1.bookNo << " " << totSold << " " << totRevenue << " ";
                if (totSold != 0)
                    std::cout << totRevenue/totSold << std::endl;
                else
                    std::cout << "(no sales)" << std::endl;
                return 0;
            } else {
                std::cerr << "Data must refer to the same ISBN" << std::endl;
                return -1;
            }
        } else {
            std::cerr << "No data for item two" << std::endl;
            return -1;
        }
    } else {
        std::cerr << "No data for item two" << std::endl;
        return -1;
    }
    return 0;
}

// 读取具有多个相同ISBN的销售记录，输出所有记录的和
int ex2_2() {
    Sales_data data, totData;
    double price = 0.0;
    if (std::cin >> totData.bookNo >> totData.units_sold >> price) {
        totData.revenue = totData.units_sold * price;
        while (std::cin >> data.bookNo >> data.units_sold >> price) {
            data.revenue = data.units_sold * price;
            if (data.bookNo == totData.bookNo) {
                totData.units_sold += data.units_sold;
                totData.revenue += data.revenue;
            } else {
                std::cout << totData.bookNo << " " << totData.units_sold << " " << totData.revenue << " " << std::endl;
                totData = data;
            }
        }
        if (totData.units_sold != 0)
           std::cout << totData.bookNo << " " << totData.units_sold << " " << totData.revenue << " " << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
    } else {
        std::cerr << "No data for item" << std::endl;
    }
    return 0;
}

// 读取多条销售记录，并统计每个ISBN有几条销售记录
int ex2_3() {
    Sales_data data, total;
    double price = 0;
    if (std::cin >> total.bookNo >> total.units_sold >> price) {
        int cnt = 1;
        while (std::cin >> data.bookNo >> data.units_sold >> price) {
            if (data.bookNo == total.bookNo)
                cnt++;
            else {
                std::cout << total.bookNo << " " << cnt << std::endl;
                total = data;
                cnt = 1;
            }
        }
        std::cout << total.bookNo << " " << cnt << std::endl;
    } else {
        std::cout << "No data for item" << std::endl;
        return -1;
    }
    return 0;
}

// 主函数
int main() {
    // example();
    // ex2_0();
    // ex2_1();
    // ex2_2();
    ex2_3();
    return 0;
}