#include "head.h"

void wildpointer()
{
    cout << "====================野指针======================" << endl;
    /* 野指针 */
    // 指针变量访问的内存空间不是我们申请的空间
    int *p = (int *)0x1100;

    // 野指针报错
    // cout << *p << endl;
}