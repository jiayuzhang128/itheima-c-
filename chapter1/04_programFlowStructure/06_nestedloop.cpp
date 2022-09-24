#include <iostream>

using namespace std;

int main(){
    /* 嵌套循环 */
    // 打印10行星号
    for (int j = 0;j < 10;j++){
        for (int i = 0;i < 10;i++){
            cout << "* " ;
        }
        cout << endl;
    }
    cout << "=================================================================" << endl;
    /* 九九乘法表 嵌套循环实现 */
    // 使用嵌套循环实现
    // 关键问题在于每一行的列数小于等于行数
    cout << "******************************倒序排列============================" << endl;
    for (int a = 9;a > 0;a--){
        for (int b = 1;b <= a;b++){
            int c = a*b;
            cout << b << " x " << a << " = " << c;
            if (a - b == 0){
                cout << endl; 
            }
            else{
                cout << "\t";
            }
        }
    }

    cout << "******************************顺序排列============================" << endl;

    for (int a = 1;a < 10;a++){
        for (int b = 1;b <= a;b++){
            int c = a*b;
            cout << b << " x " << a << " = " << c;
            if (a - b == 0){
                cout << endl; 
            }
            else{
                cout << "\t";
            }
        }
    }
}