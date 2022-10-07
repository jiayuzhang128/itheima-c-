#include "head.h"

void constpointer()
{
    /* const修饰指针 */
    // 1.const修饰指针 常量指针
    // 指针的指向可以修改，指针指向的值不可以修改
    cout << "=====================const修饰指针=====================" << endl;
    int b = 10;
    int a = 20;
    const int *p = &b;
    cout << "b = " << *p << endl;
    p = &a;
    cout << "a = " << *p << endl;
    // *p = 100是错误的
    // 2.const修饰常量 指针常量
    // 指针的指向不可以改，指针指向的值可以改
    int *const q = &a;
    cout << "a = " << *q << endl;
    *q = 30;
    cout << "a = " << a << endl;
    // q = &b 都是错误的
    // 3.const修饰常量和指针
    const int *const r = &a;
    cout << "a = " << *r << endl;
    // *r = 100 和 r = &b 都是错误的
}