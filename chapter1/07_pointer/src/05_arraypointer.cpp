#include "head.h"

void arraypointer(int *array, int len)
{
    /* 利用指针访问数组中的元素 */
    // 利用指针访问所有的数组元素
    cout << "数组的长度是：" << len << endl;
    int *p = array;
    for (int i = 0; i < len; i++)
    {
        cout << "第 " << i + 1 << " 个元素是：" << *p << endl;
        p++;
    }
}