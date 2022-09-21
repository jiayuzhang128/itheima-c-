#include <iostream>
#include <string>

using namespace std;

int main(){
    /* switch语句 */
    // 给电影进行打分
    // 10~9 经典
    // 8~7 非常好
    // 6~5 一般
    // 5以下 烂片

    int score = 0;

    // 1、提示用户给电影评分
    cout << "请给电影打分" << endl;
    // 2、用户开始进行打分
    cin >> score;
    cout << "您给出的分数是：" << score << endl;
    switch(score){
        case 10:
            cout << "您认为这部电影是 经典 的电影" << endl;
            break;
        case 9:
            cout << "您认为这部电影是 经典 的电影" << endl;
            break;
        case 8:
            cout << "您认为这部电影是 非常好 的电影" << endl;
            break;
        case 7:
            cout << "您认为这部电影是 非常好 的电影" << endl;
            break;
        case 6:
            cout << "您认为这部电影是 一般 的电影" << endl;
            break;
        case 5:
            cout << "您认为这部电影是 一般 的电影" << endl;
            break;
        default:
            cout << "您认为这部电影是 很烂 的电影" << endl;
            break;
    }
    // switch 结构清晰 执行效率高 但是条件只能是整数或者是字符型
    // if条件更加多样

} 