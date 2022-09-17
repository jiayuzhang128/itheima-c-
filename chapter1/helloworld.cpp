//
// Created by STZZ on 2022/9/17.
//

#include <iostream>
#define Day 7 //通过宏定义变量
using namespace std;

int main()
{
    int a = 10;   //变量

    const int month = 12;

    cout << a << endl;

    cout << "一周有：" << Day << "天" << endl;

    cout << "一年有：" << month << "个月" << endl;

    system("pause");

    return 0;
}