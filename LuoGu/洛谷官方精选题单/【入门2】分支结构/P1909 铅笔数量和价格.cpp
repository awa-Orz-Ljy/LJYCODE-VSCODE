#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N], b[N], c[N], d[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        cin >> a[i] >> b[i]; // 每种每袋的数量和价格
        c[i] = n / a[i];
        if (n % a[i] != 0) // 多买一袋
            c[i] += 1;
        d[i] = c[i] * b[i]; // 总价格
    }
    sort(d + 1, d + 4);
    cout << d[1];
    return 0;
}