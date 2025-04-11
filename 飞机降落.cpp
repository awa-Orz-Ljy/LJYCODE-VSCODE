#include <bits/stdc++.h>
using namespace std;
int t, n, vis[15];
struct plane
{
    int t, d, l;
} a[15];
bool dfs(int dep, int tim)
{
    if (dep > n)
        return 1;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] || a[i].t + a[i].d < tim) // 降落条件
            continue;
        vis[i] = 1;
        if (dfs(dep + 1, max(tim, a[i].t) + a[i].l)) // 记得取max
        {
            vis[i] = 0;
            return 1; // 有一个成功就返回1
        }
        vis[i] = 0; // 记得去标记
    }
    return 0;
}
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%d%d", &a[i].t, &a[i].d, &a[i].l);
        }
        memset(vis, 0, sizeof vis); // 记得清空
        if (dfs(1, 0))
            printf("YES\n");
        else
            printf("NO\n");
    }
}