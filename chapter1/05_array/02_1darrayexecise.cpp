#include <iostream>

using namespace std;

int main(){
    /* 五只小猪称重 */
    // 在数组中记录五只小猪的体重并打印最重的小猪
    int a = 123;
    int b = 234;
    int c = 232;
    int d = 223;
    int e = 256;
    int fivepigs[] = {a,b,c,d,e};
    int fatone = 0;
    for (int i = 0;i<5;i++){
        if (fivepigs[i]>fatone){
           fatone = fivepigs[i];
        }
    }
    cout << "最胖的小猪有：" << fatone << "kg" << endl;

    cout << "======================================================" << endl;
    /* 元素逆置 */
    // 先声明五个元素的数组，并将素组元素逆置
    

}