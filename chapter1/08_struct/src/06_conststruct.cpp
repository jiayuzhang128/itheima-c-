#include "head.h"

void conststruct()
{
    /* const修饰结构体数据防止误操作，被const修饰的变量将无法被修改 */
    cout << "================const struct======================" << endl;
    Coder coder;
    Coder *p = &coder;
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->salary << endl;
}

void conststruct1(const Student *stu)
{
    const Student *p = stu;
    cout << p->name << endl;
}
