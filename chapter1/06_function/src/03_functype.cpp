#include <iostream>

using namespace std;

/* 函数常见形式 */
// 有参有返
// 无参有返
// 有参无返
// 无参无返

// 1.无参无返
void func1()
{
    cout << "func1" << endl;
}

// 2.有参无返
void func2(int a, int b)
{
    cout << a + b << endl;
}

// 3.无参有返
int func3()
{
    int a = 1;
    int b = 2;
    return a + b;
}

// 有参有返
int func4(int a, int b)
{
    return a * b;
}
int main()
{
    func1();
    int a = 1;
    int b = 2;
    func2(a, b);
    int c = func3();
    cout << c << endl;
    int d = func4(a, b);
    cout << d << endl;
}