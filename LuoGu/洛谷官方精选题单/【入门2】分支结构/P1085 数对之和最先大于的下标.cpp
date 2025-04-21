#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum, temp = 0, pos = 0;
    for (int i = 1; i <= 7; i++)
    {
        cin >> n >> m;
        sum = n + m;
        if (sum > 8 && sum > temp) // temp参与比较和实时更新，当出现第二个相同的数字，i不发生改变，输出的是靠前的下标
        {
            temp = sum;
            pos = i;
        }
    }
    cout << pos;
}