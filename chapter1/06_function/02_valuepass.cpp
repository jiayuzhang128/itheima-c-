#include <iostream>

using namespace std;

void swap(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    // 值传递时形参发生改变，不会影响实参
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << a << endl;
    cout << b << endl; // 这里的实参a，b不会改变
    // TODO
}