#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 200;
int n, m;
char mp[N][N];
bool vis[N][N];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//-1,0,1,0
// 0,-1,0,1

bool inmp(int x, int y)
{
    return x <= n && x >= 1 & y <= m && y >= 1;
}

int check(int x, int y)
{
    int cnt = 0;
    for (int d = 0; d < 8; d++)
    {
        int nx = x + dx[d], ny = y + dy[d];
        if (inmp(nx, ny) && mp[nx][ny] == '*')
            cnt++;
    }
    return cnt;
}

void dfs(int x, int y)
{
    if (!inmp(x, y) || vis[x][y] || check(x, y))
        return;
    vis[x][y] = true;
    int mines = check(x, y);
    mp[x][y] = mines + '0'; // 显示雷数
    if (mines == 0)
    {
        // 周围没雷，就继续展开
        for (int d = 0; d < 8; d++)
        {
            dfs(x + dx[d], y + dy[d]);
        }
    }
}

int main()
{
    cin >> n >> m;
    // 输入
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
        }
    }
    // 枚举坐标
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (mp[i][j] == '*' && inmp(i, j))
            {
                cout << "*";
            }
            else
            { // 清空cnt，枚举周围的八个点
                int cnt = 0;
                for (int d = 0; d < 8; d++)
                {
                    int xn = dx[d] + i;
                    int yn = dy[d] + j;

                    if (inmp(xn, yn) && mp[xn][yn] == '*')
                    {
                        cnt++;
                    }
                }
                cout << cnt;
            }
        }
        cout << '\n';
    }
    return 0;
}