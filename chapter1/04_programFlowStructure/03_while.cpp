#include <iostream>
#include <string>

using namespace std;

int main(){
    /* while循环语句 */
    // while(循环条件)(循环语句)只要循环条件为真，就执行循环语句
    // 在屏幕中打印0~9

    int num = 0;
    while(num < 10){
        cout << num++ << endl;
    }
    // while循环练习
    // 猜数字
    
    // 1、系统生成随机数1~100
    int random = rand()%100 + 1;
    // 2、用户输入数字
    int guess = 0;
    cout << "请输入您猜测的数字：" << endl;
    cin >> guess;
    cout << "您猜测的数字是：" << guess << endl;
    // 3、判断是否才对，才对输出结果退出，否则提示并继续
    while(guess != random){
        if (guess  > random){
            cout << "大了！" << endl;
        }
        else{
            cout << "小了！" << endl;
        }
        cout << "请再次输入您猜测的数字：" << endl;
        cin >> guess;
        cout << "您猜测的数字是：" << guess << endl;
    }
    cout << "恭喜您猜对了，结果是：" << guess << endl;
}