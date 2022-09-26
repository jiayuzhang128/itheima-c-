#include <iostream>

using namespace std;

int main(){
    /* 一维数组的冒泡排序 */
    int array[] = {2,3,6,8,3,9,7,5,4,0,1};
    int len = sizeof(array)/sizeof(array[0]);
    for (int i = 0;i < len;i++){
        cout << array[i] << endl;
    }
    cout << "====================================" << endl;
    int temp = 0;
    for (int i = len; i > 1; i--){
       for (int j = 0;j < i-1; j++) {
        temp = array[j];
        if (array[j]>array[j+1]){
            array[j] = array[j+1];
            array[j+1] = temp;
        }
       }
    }
    for (int i = 0;i < len;i++){
        cout << array[i] << endl;
    }
}