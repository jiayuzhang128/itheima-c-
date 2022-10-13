#include "head.h"

void structinstruct()
{
    Teacher jia;
    Teacher *p = &jia;
    cout << "=================老师======================" << endl;
    cout << p->name << endl;
    cout << p->age << endl;
    cout << "=================老师带的学生======================" << endl;
    cout << p->stu.name << endl;
    cout << p->stu.age << endl;
    cout << p->stu.score << endl;
}