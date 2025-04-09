#include <bits/stdc++.h>
#define N 200005
using namespace std;
map<int, vector<int>> m1, m2;
int n, m, a[N], b[N], ans, u, v;
void dfs(int x, int y, int count)
{
    if (a[x] != b[y])
        return;
    ans = max(ans, count + 1);
    for (int i = 0; i < m1[x].size(); i++)
        for (int j = 0; j < m2[y].size(); j++)
        {
            int a1 = m1[x][i];
            int b1 = m2[y][j];
            dfs(a1, b1, count + 1);
        }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> u >> v;
        m1[u].push_back(v);
    }
    for (int i = 1; i <= m - 1; i++)
    {
        cin >> u >> v;
        m2[u].push_back(v);
    }
    dfs(1, 1, 0);
    cout << ans;
}