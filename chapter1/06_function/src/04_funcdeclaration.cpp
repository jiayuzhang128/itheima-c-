#include <iostream>

using namespace std;

/* 函数声明 */
// 如果函数没有提前声明，如果函数定义写main函数在后面，则会报错

// 函数的声明就可以解决上面的问题
// 声明可以写多次，定义可以写多次
int min(int a, int b);

int main()
{
    int a = 1;
    int b = 2;
    cout << min(a, b) << endl;
}

int min(int a, int b)
{
    int min = a > b ? b : a;
    return min;
}