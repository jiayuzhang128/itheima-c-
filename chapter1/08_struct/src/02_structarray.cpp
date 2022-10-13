#include "head.h"

void structarray()
{
    /* 结构体数组 */
    // 创建结构体数组
    Student stu1, stu2, stu3;
    stu2.name = "曹操";
    stu2.age = 65;
    stu2.score = 59;
    stu3.name = "孙权";
    stu3.age = 43;
    stu3.score = 78;
    Student stuarr[] = {stu1, stu2, stu3}; //值传递
    // 赋值
    stuarr[0].name = "赵六";
    stuarr[0].age = 18;
    stuarr[0].score = 60;
    for (int i = 0; i < 3; i++)
    {
        cout << stuarr[i].name << "\t";
        cout << stuarr[i].age << "\t";
        cout << stuarr[i].score << endl;
    }
}