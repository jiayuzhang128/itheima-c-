#include <iostream>

using namespace std;

int main()
{
    int score[3][3] = {{100, 100, 100}, {90, 50, 100}, {60, 70, 80}};
    // 打印成绩
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            cout << "张三的成绩是：" << endl;
            break;
        case 1:
            cout << "李四的成绩是：" << endl;
            break;
        case 2:
            cout << "王五的成绩是：" << endl;
            break;
        }
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                cout << "语文：" << score[i][j] << "\t";
                break;
            case 1:
                cout << "数学：" << score[i][j] << "\t";
                break;
            case 2:
                cout << "英语：" << score[i][j] << "\t";
                break;
            }
        }
        cout << endl;
    }
    /* 输出三个人的总分的 */
    int total[3];
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            cout << "张三的总成绩是：" << endl;
            break;
        case 1:
            cout << "李四的成绩是：" << endl;
            break;
        case 2:
            cout << "王五的成绩是：" << endl;
            break;
        }
        for (int j = 0; j < 3; j++)
        {
            total[i] += score[i][j];
        }
        cout << total[i] << endl;
    }
}