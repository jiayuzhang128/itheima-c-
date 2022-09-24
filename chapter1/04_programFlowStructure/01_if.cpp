#include <iostream>
#include <string>

using namespace std;

int main(){
    /* 顺序结构 选择结构 循环结构 */ 
    // 选择结构
    // if语句
    // if-else   用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出，其他情况，在屏幕输出未考上一本大学
    int score = 0;
    cout << "请输入您的高考分数：" << endl;
    cin >> score;
    cout << "您的高考分数为：" << score << endl;
    
    if (score > 600){
        cout << "恭喜您！考上了一本大学" << endl;
    }
    else{
        cout << "很遗憾，您没能考上一本大学" << endl;
    }
    // if-else if-else if-...-else多条件的if语句
    // score>600 一本
    // 500<score<=600 二本
    // 400<score<=500 三本
    // score< 400 没考上本科
    cout << "请输入您的高考分数：" << endl;
    cin >> score;
    cout << "您的高考分数为：" << score << endl;
    
    if (score > 600){
        cout << "恭喜您！考上了一本大学" << endl;
    }
    else if (score <= 600 && score >500){
        cout << "恭喜您，您考上二本大学" << endl;
    }
    else if (score <= 500 && score > 400){
        cout << "恭喜您，您考上三本大学" << endl;
    }
    else {
        cout << "很遗憾，您未能考上本科" << endl;
    }
    // 嵌套if语句
    cout << "请输入您的高考分数：" << endl;
    cin >> score;
    cout << "您的高考分数为：" << score << endl;
    
    if (score > 600){
        cout << "恭喜您！考上了一本大学" << endl;
        if (score > 650 && score <700){
            cout << "您的分数已经达到北大录取线！" << endl;
        }
        else{
            cout << "您的分数已经达到清华录取线！" << endl;
        }
    }
    else if (score <= 600 && score >500){
        cout << "恭喜您，您考上二本大学" << endl;
    }
    else if (score <= 500 && score > 400){
        cout << "恭喜您，您考上三本大学" << endl;
    }
    else {
        cout << "很遗憾，您未能考上本科" << endl;
    }

    // 三只小猪称重，找到最重的小猪
    int a, b, c = 0;
    cout << "请输入小猪A的体重：" << endl;
    cin >> a;
    cout << "请输入小猪A的体重：" << endl;
    cin >> b;
    cout << "请输入小猪A的体重：" << endl;
    cin >> c;
    if (a < b){
        if (b > c){
            cout << "最重的是小猪B，有 " << b << " kg" << endl;
        }
        else if (b == c){
            cout << "最重的是小猪B和C，有 " << b << " kg" << endl;
        }
        else{
            cout << "最重的是小猪C，有 " << c << " kg" << endl;
        }
    }
    else if (a > b){
        if (a > c){
            cout << "最重的是小猪A，有 " << a << " kg" << endl;
        }
        else if (a == c){
            cout << "最重的是小猪A和C，有 " << a << " kg" << endl;
        }
        else{
            cout << "最重的是小猪C，有 " << c << " kg" << endl;
        }
    }
    else{
        if (a > c){
            cout << "最重的是小猪A和B，有 " << a << " kg" << endl;
        }
        else if (a == c){
            cout << "三个小猪一样重 " << c << " kg" << endl;
        }
        else{
            cout << "最重的是小猪C，有 " << c << " kg" << endl;
        }
    }

    /* 三目运算符 */
    // 创建三个变量a,b,c,将a,b中值大的复制给c
    c = (a > b ? a : b);
    cout << "c = " << c << endl;
    // 三目运算符返回的变量可以继续赋值
    (a < b ? a : b) = 100;
}