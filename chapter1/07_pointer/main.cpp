#include <iostream>
#include <string>
#include "head.h"

using namespace std;

int main()
{
    /* 指针定义 */
    // 1、数据类型 * 指针变量名；
    int *p;
    int a = 5;
    p = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl;

    // 2、使用指针，解引用
    // 可以通过解引用的方式来找到指针指向的内存,*p表示解引用，指向该内存的数据
    cout << "a的值是：" << a << endl;
    cout << "*p指向的值是：" << *p << endl;

    /* 指针的内存空间 */
    // 32位系统所有指针占4个字节，64位系统占8个字节
    pointerspace();

    /* 空指针 */
    nullpointer();

    /* 野指针 */
    wildpointer();

    /* const修饰指针 */
    constpointer();

    /* 数组与指针 */
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    arraypointer(arr1, len);
    // string str = "123";
    // cout << str.size() << endl;
}