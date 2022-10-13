#include "head.h"

void definestruct()
{

    // 创建具体的结构体变量
    // struct Student 变量名;
    Student stu1;
    stu1.name = "张三";
    stu1.age = 20;
    stu1.score = 100;
    cout << stu1.name << endl;
    cout << stu1.age << endl;
    cout << stu1.score << endl;
    // Student stu2 = {};
    Student stu2 = {"李四", 23, 80};
    cout << stu2.name << endl;
    cout << stu2.age << endl;
    cout << stu2.score << endl;
}