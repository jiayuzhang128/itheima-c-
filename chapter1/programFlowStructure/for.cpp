#include <iostream>

using namespace std;

int main(){
    /* for 循环语句 */
    // for (起始表达式；条件表达式；末尾循环体){循环语句}
    // 打印0~9
    for (int i = 0;i < 10;i++){
        cout << i << endl;
    }
    /* for实现水仙花 */
    for (int a = 1;a < 10;a++){
        for (int b = 0;b < 10;b++){
            for (int c = 0;c < 10;c++){
                if (a*a*a + b*b*b + c*c*c == a*100 +b*10+c){
                    cout << a*100 +b*10+c << endl;
                }
            }
        }
    }
}