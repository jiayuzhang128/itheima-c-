#include <iostream>
#include <string>

using namespace std;

int main(){
    /* 加减乘除 */
    int a1 = 10;
    int b1 = 3;
    int a2 = ++a1; // 运算符在前时先运算再赋值，运算符在后时先赋值再运算
    int b2 = b1++;
    int a3 = --a1;
    int b3 = b1--;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl; // 整型结果依然是整型，结果带小数会直接舍去小数
    cout << a2 << endl; 
    cout << b2 << endl; 
    cout << a3 << endl; 
    cout << b3 << endl; 

    double d1 = 0.1;
    double d2 = 0.3;

    cout << d1 / d2 << endl;

    /* 取模运算(取余）`%` */
    // 只有整型运算
    cout << a1 % b1 << endl;

    /* 赋值运算符 */
    // = 
    int a = 10;
    cout << a << endl;

    // +=
    a += 1;
    cout << a << endl;

    // -=
    a -= 1;
    cout << a << endl;

    // *=
    a *= 2;
    cout << a << endl;

    // /=
    a /= 2;
    cout << a << endl;
    
    /* 比较运算符 */
    cout << (4 == 1) << endl;
    cout << (4 != 1) << endl;
    cout << (4 < 1) << endl;
    cout << (4 > 1) << endl;
    cout << (4 >= 1) << endl;
    cout << (4 <= 1) << endl;
    
    /* 逻辑运算符 */
    // 与&& 或|| 非!
    bool logic = true;
    bool magic = false;
    cout << (logic && magic) << endl;
    cout << (logic || magic) << endl;
    cout << !magic << endl;

    



}


