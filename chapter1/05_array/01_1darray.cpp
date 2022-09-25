#include <iostream>

using namespace std;

int main(){
    /* 一维数组 */
    // 数组储存在一段连续的内存空间，且是一组相同类型的数据
    // 定义方式
    // 数据类型 数组名[数组长度];
    // 数据类型 数组名[数组长度] = {值1, 值2, ...};
    // 数据类型 数组名[] = {值1, 值2, ...};
    
    // 第一种定义方式
    int array1[3];
    array1[0] = 10;
    array1[1] = 11;
    array1[2] = 12;

    // 通过下索引访问数组中的数据 数组名[索引]
    for (int i = 0;i<3;i++){
        cout << array1[i] << endl;
    }
    cout << "============================================================" <<endl;

    // 第二种定义方式
    // 没有初始化的数据用0来填充
    int array2[3] = {20, 30};

    cout << array2[0] << endl;
    cout << array2[1] << endl;
    cout << array2[2] << endl;

    cout << "============================================================" <<endl;

    // 第三种定义方式
    int array3[] = {1,2,3};
    for (int j = 0;j<3;j++){
        cout << array3[j] << endl;
    }

    cout << "============================================================" <<endl;
    /* 一维数组名的用途 */
    // sizeof()统计数组在内存中的长度
    // 获取数组在内存中的首地址 取地址符号 &
    // 数组名是一个常量不能复赋值

    int array[] ={1,2,3,4,5};

    cout << sizeof(array) << endl;
    cout << sizeof(array[0]) << endl;
    cout << sizeof(array)/sizeof(array[0]) << endl;

    cout << "============================================================" <<endl;
    
    cout << "数组首地址：" << array << endl;
    cout << "数组第一个元素地址：" << &array[0] << endl;
    cout << "数组首地址：" << &array[1] << endl;
}