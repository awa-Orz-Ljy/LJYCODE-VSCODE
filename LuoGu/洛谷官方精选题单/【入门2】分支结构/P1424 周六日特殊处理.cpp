#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, ans = 0;
    int x;
    cin >> x >> n; // 输入星期和持续天数
    for (int i = 0; i < n; i++)
    {
        if ((x != 6) && (x != 7)) // 工作日
            ans += 250;
        if (x == 7) // 周末处理67
            x = 1;
        else 
            x++;
    }
    cout << ans;
    return 0;
}