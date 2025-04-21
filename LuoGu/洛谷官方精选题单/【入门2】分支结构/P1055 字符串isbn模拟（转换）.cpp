#include <bits/stdc++.h>
using namespace std;

int main()
{
    string isbn;
    cin >> isbn;

    string num;  // 用来拼接前9位数字
    int cnt = 0; // 计数器，表示当前是第几位数字（1~9）
    int sum = 0; // 计算识别码用的

    // 把前9个数字提出来并计算加权和，-这个符号就忽略了
    for (int i = 0; i < isbn.size(); i++)
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
        {
            cnt++;
            sum += (isbn[i] - '0') * cnt; // 求加权和
            num += isbn[i];               // 拼接，这个是重点
            if (cnt == 9)
                break; // 一共只取前9位数字
        }
    }

    // 计算正确的识别码
    int mod = sum % 11;
    char check = (mod == 10) ? 'X' : (mod + '0');

    // 最后一位是识别码（下标为12）
    char end = isbn[isbn.size() - 1];

    // 判断是否一致
    if (end == check)
        cout << "Right" << endl;
    else
    {
        // 输出更正后的 ISBN
        for (int i = 0; i < isbn.size() - 1; i++)
            cout << isbn[i];
        cout << check << endl;
    }

    return 0;
}
