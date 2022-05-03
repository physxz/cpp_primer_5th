/*
 * @Author: 赵小鑫
 * @Date: 2022-05-02 20:01:43
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-05-02 21:10:54
 * @FilePath: /3_25.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int vect() {
    vector<int> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
        if (grade <= 100)
            scores[grade/10]++;
    for (auto &i: scores)
        cout << i << " ";
    cout << endl;
    return 0;
}

int iter(){
    vector<int> scores(11, 0);
    unsigned grade;

    auto beg = scores.begin(), end = scores.end();
    auto mid = beg + (beg-end)/2;
    while (cin >> grade)
        if(grade <= 100)
            ++*(beg + grade/10);

    for (auto it = beg; it != end; it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}

int main(){
    // vect();
    iter();
    return 0;
}