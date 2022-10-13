#include "head.h"

void structpointer()
{
    /* 结构体指针 */
    Student stu = {"刘备", 56, 89};
    // 通过指针访问结构体
    Student *p = &stu;
    // 指针访问结构体中的数据 "->" 访问
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;
}