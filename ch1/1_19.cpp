/*
 * @Author: 赵小鑫
 * @Date: 2022-04-27 17:34:48
 * @LastEditors: 赵小鑫
 * @LastEditTime: 2022-04-27 17:55:02
 * @FilePath: /ch1/1_19.cpp
 * @Description: 
 */

// #include <iostream>
// int main(){
//     int v1, v2;
//     std::cout << "输入两个数：" << std::endl;
//     std::cin >> v1 >> v2;
//     if(v1 <= v2){
//         while(v1 <= v2)
//             std::cout << v1++ << " ";
//     }
//     else{
//         while(v1 >= v2)
//             std::cout << v2++ << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }

#include <iostream>
int main(){
    int v1, v2;
    std::cout << "输入两个数：" << std::endl;
    std::cin >> v1 >> v2;
    if(v1 <= v2){
        while(v1 <= v2)
            std::cout << v1++ << " ";
    }
    else{
        while(v1 >= v2)
            std::cout << v1-- << " ";
    }
    std::cout << std::endl;
    return 0;
}