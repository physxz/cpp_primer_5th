/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 15:42:53
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 16:12:55
 * @FilePath: /ch1/1_15.cpp
 * @Description: 运行后输入流检测到无效值（如\n或任意非整数）时停止循环
 */

#include <iostream>
int main(){
    int v1 = 0, v2 = 0;
    std::cout << "Read each file." << std::endl;
    std::cout << "Update master." << std::endl;
    std::cout << "Write new master." << std::endl;
    std::cin >> v1 >> v2;
    std::cout << v1 + v2 << std::endl;
    return 0;
}