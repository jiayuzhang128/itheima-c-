#include "head.h"

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
}

void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << endl;
    cout << *b << endl;
}