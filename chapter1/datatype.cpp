#include <iostream>
#include <string>


using namespace std;

int main(){
    /* 整型 */
    short num1 = 32768; // 2bytes

    int num2 = 32768;   // 4bytes

    long num3 = 10;      // window 下 4bytes；linux 32位 4bytes；linux 64位 8bytes

    long long num4 = 20; // 8bytes

    cout << num1 << endl;

    /* sizeof */
    cout << sizeof(num2) << endl;
    cout << sizeof(num3) << endl;
    cout << sizeof(num4) << endl;

    /* 实型(浮点数) */
    // 无论float还是double默认情况下输出小数显示6位有效数字
    float num5 = 0.15f;   // 7位有效数字，数字默认为双精度，因此单精度浮点数一般在数字后面加`f`
    double num6 = 3.14;   // 15~16位有效数字

    cout << num5 << endl;
    cout << num6 << endl;
    cout << sizeof(num5) << endl;
    cout << sizeof(num6) << endl;

    /* 科学计数法 */
    float num7 = 3e-2f;
    cout << num7 << endl;

    /* 字符型 */
    // 创建字符只能单引号
    // 单引号只能填写单个字符
    char ch = 'a';
    cout << ch << endl;  
    cout << ch+0 << endl; // char类型以ASCII码存储，'a'的ASCII码为97
    cout << (int)ch << endl; // char类型以ASCII码存储，'a'的ASCII码为97
    cout << sizeof(ch) << " bytes" << endl;  // 占用一个字节

    /* 转义字符 */
    // 表示一些不能显示出来的ASCII字符，如`\n`，`\\`，`\t`等
    cout << "aaa\thello" << endl;  // `\t`移动到下一个制表位
    cout << "aa\thello" << endl;  // `\t`移动到下一个制表位
    cout << "a\thello" << endl;  // `\t`移动到下一个制表位

    /* 字符串 */
    // C风格字符串`char 变量名[] = "字符串值"
    char str1[] = "C type string";
    cout << str1 << endl;  // `\t`移动到下一个制表位

    // C++风格字符串`string 变量名 = “字符串值”
    string str2 = "C++ type string";
    cout << str2 << endl;  
 
    /* 布尔类型值 */
    // bool类型非零值都为真
    bool flag1 = true;
    cout << flag1 << endl;  
    
    bool flag2 = false;
    cout << flag2 << endl;  
    // 所占内存
    cout << sizeof(flag2) << " bytes" << endl;  

    /* 数据输入 */
    // 整数
    int a = 0;
    cout << "请输入一个整数：" << endl;
    cin >> a;
    cout << "输入的整数为：" << a << endl;
    // 小数 
    float f = 0.0f;
    cout << "请输入一个小数：" << endl;
    cin >> f;
    cout << "输入的小数为：" << f << endl;

}