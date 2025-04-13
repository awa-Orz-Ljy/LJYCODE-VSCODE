#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 200;

int d[N][N], n, m, x, y;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> d[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        char s;
        cin >> s;
        if (s == 'R')
        {
            cin >> x;
            int temp = d[x][m];

            for (int j = m; j >= 2; j--)
            {
                d[x][j] = d[x][j - 1];
            }
            d[x][1] = temp;
        }

        if (s == 'C')
        {
            cin >> y;
            int temp = d[n][y];

            for (int j = n; j >= 2; j--)
            {
                d[j][y] = d[j - 1][y];
            }
            d[1][y] = temp;
        }

        if (s == 'Q')
        {
            cin >> x >> y;
            cout << d[x][y] << '\n';
        }
    }
    return 0;
}
