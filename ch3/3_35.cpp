/*
 * @Author: 赵小鑫
 * @Date: 2022-05-03 09:44:35
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-03 10:53:26
 * @FilePath: /ch3/3_35.cpp
 * @Description: 
 */

#include <iostream>
using namespace std;

int main() {
    int ia[] = {1,2,3,4,9};
    int *p = ia;
    for (auto i: ia)
        cout << i << " "; // 改前
    cout << endl;
    for (int *beg = begin(ia); beg != end(ia); beg++)
        *beg = 0;
    for (auto i: ia)
        cout << i << " "; // 改后
    cout << endl;
    return 0;
}