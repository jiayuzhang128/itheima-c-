#include <iostream>

using namespace std;

int main() {
    /* break */
    // 1、出现在选择语句中 switch 跳出选择语句
    cout << "请选择游戏难度" << endl;
    cout << "1、普通难度" << endl;
    cout << "2、中等难度" << endl;
    cout << "3、困难难度" << endl;
    cout << "请输入您的选择：" << endl;

    int n = 0;
    cin >> n;
    cout << "您选择的是：" << endl;
    switch (n){
        case 1:
            cout << "普通难度" << endl;
            break;
        case 2:
            cout << "中等难度" << endl;
            break;
        case 3:
            cout << "困难难度" << endl;
            break;
        default:
            break;
    }

    cout << "==============================================" << endl;
    // 出现在循环语句中 退出循环
    for (int i = 0;i < 10;i++){
        if (i == 7){
            break;
        }
        cout << i <<endl;
    }
    cout << "==============================================" << endl;
    // 出现在嵌套循环中 退出内循环
    for (int i = 0;i < 10;i++){
        for (int j = 0;j < 10;j++){
            if (j == 6){
                break;
            }
            cout << "*"; 
        }
        cout << endl;
    }
    cout << "==============================================" << endl;

    /* continue */
    // break直接退出循环，而continue只跳过本次循环中还未执行的语句，直接继续下一次循环
    for (int i = 0;i < 10;i++){
        if (i % 2 == 0){
            continue;
        }
        cout << i <<endl;
    }
    /* goto */
    // 无条件跳转
    int i = 0;
    int j = 1;
    cout << 1 << endl;
    cout << 1 << endl;
    goto FLAG;
    cout << 1 << endl;
    cout << 1 << endl;
FLAG:
    cout << 2 << endl;

}