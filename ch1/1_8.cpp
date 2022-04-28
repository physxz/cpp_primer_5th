/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 11:26:44
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 12:38:26
 * @FilePath: /ch1/1_8.cpp
 * @Description: 
 */


#include <iostream>
int main(){
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
    std::cout << std::endl;
    return 0;
}