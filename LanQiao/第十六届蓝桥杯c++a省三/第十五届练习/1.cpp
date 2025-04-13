#include <bits/stdc++.h>
using namespace std;
int mp[5][5];
int u = 0;
void dfs(int sum, int w, int b)
{
    // 地图满了；判断
    if (sum == 25)
    {
        if (w == 13 && b == 12)//白棋先手
        {

            for (int i = 0; i < 5; i++)
            {
                int s = mp[i][0] + mp[i][1] + mp[i][2] + mp[i][3] + mp[i][4];
                if (s == 5 || s == 0)
                    return;
            }

            for (int i = 0; i < 5; i++)
            {
                int m = mp[0][i] + mp[1][i] + mp[2][i] + mp[3][i] + mp[4][i];
                if (m == 5 || m == 0)
                    return;
            }

            int p = mp[0][0] + mp[1][1] + mp[2][2] + mp[3][3] + mp[4][4];
            int l = mp[0][4] + mp[1][3] + mp[2][2] + mp[3][1] + mp[4][0];
            if (p == 0 || p == 5 || l == 0 || l == 5)
                return;

            u++;
        }
        return;
    }
    int x = sum / 5;
    int y = sum % 5; // 计算坐标
    // 选择白棋
    mp[x][y] = 1;    
    dfs(sum + 1, w + 1, b);
    // 选择黑棋
    mp[x][y] = 0;
    dfs(sum + 1, w, b + 1);
}
int main()
{
    dfs(0, 0, 0);
    cout << u;
    return 0;
}