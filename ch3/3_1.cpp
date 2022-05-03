/*
 * @Author: 赵小鑫
 * @Date: 2022-04-30 16:18:12
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-30 17:13:16
 * @FilePath: /ch3/3_1.cpp
 * @Description: 
 */

#include <iostream>
using std::cin;
using std::cout; using std::endl;

int ex1_9() {
    int sum = 0, i = 50;;
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << sum << endl;
    return 0;
}

int ex1_10() {
    for (int i = 10; i >= 0; i--) 
        cout << i << endl;
    return 0;
}

int ex1_11() {
    int num1, num2;
    cout << "请输入两个整数：";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
        cout << i << endl;
}

int ex2_41() {
    return 0;
}

int main() {
    ex1_9();
    ex1_10();
    ex1_11();
    ex2_41();
    return 0;
}