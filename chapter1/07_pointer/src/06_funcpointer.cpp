#include "head.h"

void funcpointer()
{
    /* 值传递 */

    cout << "=================值传递================ " << endl;
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "================================= " << endl;
    swap(a, b);
    cout << "================================= " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    /* 地址传递 */

    cout << "=================地址传递================ " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "================================= " << endl;
    swap1(&a, &b);
    cout << "================================= " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}