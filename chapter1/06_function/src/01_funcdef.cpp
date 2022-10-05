#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int main()
{
    /* 函数定义 */
    // 1. 返回值类型
    // 2. 函数名
    // 3. 参数列表
    // 4. 函数体
    // 5. return表达式

    // 实现add函数

    // 函数调用
    int a = 10;
    int b = 20;
    int c = 0;
    c = add(a, b);
    cout << c << endl;
    return 0;
}