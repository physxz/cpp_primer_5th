/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 22:03:50
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 22:07:13
 * @FilePath: /ch3/3_45.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int ia[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    // 版本1
    for (auto &row: ia) {
        for (auto &col: row)
            cout << col << " ";
        cout << endl;
    }
    // 版本2
    int row = 3;  // 3行
    int col = 4;  // 4列
    for (auto i = 0; i != row; i++) {   // 尽量使用!=
        for (auto j = 0; j != col; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    // 版本3
    for (auto p = ia; p != ia + row; p++) {
        for (auto q = *p; q != *p + col; q++)
            cout << *q << " ";
        cout << endl;
    }
    return 0;
}