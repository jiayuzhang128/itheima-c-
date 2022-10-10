#include "head.h"

void pointercase(int *arr, int len)
{
    /* 冒泡排序法将整型数组升序排列 */
    int *p = arr;
    int temp;
    for (int i = len - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            int *q = p + j + 1;
            if (*p > *q)
            {
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
        p++;
    }
}