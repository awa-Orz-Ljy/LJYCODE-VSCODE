#include <bits/stdc++.h>
using namespace std;
int t, n, vis[15];
struct plane
{
    int t, d, l;
} a[15];
bool dfs(int dep, int tim)
{
    // 成功条件
    if (dep > n)
    {
        return 1;
    }
    // 遍历加回溯
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] || a[i].t + a[i].d < tim)
        {
            continue;
        }
        vis[i] = 1;
        if (dfs(dep + 1, max(tim, a[i].t) + a[i].l))
        {
            vis[i] = 0;
            return 1;
        }
        vis[i] = 0;
    }
    return 0;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].t >> a[i].d >> a[i].l;
        }
        memset(vis, 0, sizeof vis);
        if (dfs(1, 0))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
