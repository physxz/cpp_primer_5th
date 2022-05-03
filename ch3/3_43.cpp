/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 21:13:15
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 22:02:26
 * @FilePath: /ch3/3_43.cpp
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
    for (int (&row)[4]: ia) {
        for (int &col: row)
            cout << col << " ";
        cout << endl;
    }
    // 版本2
    int row = 3;  // 3行
    int col = 4;  // 4列
    for (int i = 0; i != row; i++) {   // 尽量使用!=
        for (int j = 0; j != col; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    // 版本3
    for (int (*p)[4] = ia; p != ia + row; p++) {
        for (int *q = *p; q != *p + col; q++)
            cout << *q << " ";
        cout << endl;
    }
    return 0;
}