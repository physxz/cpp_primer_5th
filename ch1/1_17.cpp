/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 16:27:21
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 16:35:56
 * @FilePath: /ch1/1_17.cpp
 * @Description: 
 */

#include <iostream>
int main(){
    int currVal = 0, val = 0;
    if(std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(val == currVal)
                cnt++;
            else{
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}