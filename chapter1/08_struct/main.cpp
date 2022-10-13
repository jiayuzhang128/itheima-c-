#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    cout << "hello struct" << endl;
    cout << "============================================" << endl;
    /* 结构体可以理解为用户自定义数据类型 */
    // struct 结构体名 { 结构体成员列表 }
    definestruct();
    /* 结构体数组 */
    structarray();
    /* 结构体指针 */
    structpointer();
    /* 结构体嵌套 */
    structinstruct();
    Student stu;
    Teacher t = {"jia", 50, stu};
    cout << "============值传递==================" << endl;
    structinfunc(t);
    cout << t.name << endl;
    cout << "============地址传递==================" << endl;
    structinfunc1(&t);
    cout << t.name << endl;
    /* const 修饰结构体 */
    conststruct();
    const Student stu1 = {"独孤博", 78, 90};
    conststruct1(&stu1);
}