/*
 * @Author: 赵世鑫
 * @Date: 2022-04-27 15:22:58
 * @LastEditors: 赵世鑫
 * @LastEditTime: 2022-04-27 15:33:42
 * @FilePath: /ch1/1_13.cpp
 * @Description: 
 */

// #include <iostream>
// int main(){
//     int sum = 0;
//     for(int i = 50; i <= 100; i++)
//         sum += i;
//     std::cout << sum << std::endl;
//     return 0;
// }

// #include <iostream>
// int main(){
//     for(int i = 10; i >= 0; i--)
//         std::cout << i << " " << std::endl;
//     return 0;
// }

#include <iostream>
int main(){
    int v1 = 0, v2 = 0;
    std::cout << "输入两个整数（先小后大）：" << std::endl;
    std::cin >> v1 >> v2;
    for(v1; v1 <= v2; v1++)
        std::cout << v1 << " ";
    std::cout << std::endl;
    return 0;
}