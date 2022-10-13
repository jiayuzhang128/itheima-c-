#include "head.h"

void structinfunc(Teacher tea)
{
    Teacher *p = &tea;
    p->name = "wang";
    cout << "===============结构体函数===================" << endl;
    cout << p->name << endl;
}

void structinfunc1(Teacher *tea)
{
    Teacher *p = tea;
    p->name = "wang";
    cout << "===============结构体函数===================" << endl;
    cout << p->name << endl;
}