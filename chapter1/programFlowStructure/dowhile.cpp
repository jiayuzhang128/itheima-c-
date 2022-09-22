#include <iostream>

using namespace std;

int main(){
    // do while语句
    // 打印0~9
    int num = 0;
    do{
        cout << num++ << endl;
    }
    while(num < 10);
    /* 水仙花数 */
    // 水仙花数：一个三位数，个十百位数的3次幂之和等于其本身。eg 1*1*1 + 5*5*5 + 3*3*3 = 153
    int number = 100;
    cout << "水仙花数为：" << endl;
    do{
        int a = number / 100; // 百位
        int b = (number / 10) % 10; // 十位
        int c = number % 10; // 个位
        if (a*a*a + b*b*b +c*c*c == number){
            cout << "\t" << number << endl;
        }
        number++;
    }
    while(number < 1000);
}