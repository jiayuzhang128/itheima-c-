#include "head.h"

void nullpointer()
{
    cout << "=====================空指针=====================" << endl;
    /* 空指针 */
    // 指针变量将指向内存地址为0的内存空间
    // 作用：给指针变量赋初值
    int *p = nullptr;

    // 空指针会报错:空指针错误
    // cout << *p << endl;
}