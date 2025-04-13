#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int mp[N][N], d[N][N];
int n, m, sx, sy, ex, ey;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
bitset<N> vis[N];

bool inmp(int x, int y)
{
	return x >= 1 && x <= n && y >= 1 && y <= m;
}

void bfs(int sx, int sy, int ex, int ey)
{
	queue<pair<int, int>> q;
	d[sx][sy] = 0;
	vis[sx][sy] = true;
	q.push({sx, sy});
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;
			if (!vis[nx][ny] && inmp(nx, ny) && mp[nx][ny])
			{
				d[nx][ny] = d[x][y] + 1;
				vis[nx][ny] = true;
				q.push({nx, ny});
			}
			if (nx == ex && ny == ey)
				break;
		}
	}
}

void solve()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> mp[i][j];
		}
	}
	cin >> sx >> sy >> ex >> ey;
	bfs(sx, sy, ex, ey);
	if (!vis[ex][ey])
		cout << -1 << endl;
	else
		cout << d[ex][ey] << endl;
}

int main()
{
	int q = 1;
	while (q--)
		solve();
	return 0;
}
