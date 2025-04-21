#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int m, t, s;
	cin >> m >> t >> s;
	if (t == 0) // 耗时0s
	{
		cout << 0 << endl;
		return 0;
	}
	if (s % t == 0) // 完整吃完
		cout << max(m - s / t, 0);
	else // 还在吃，要减掉还在吃的那个
		cout << max(m - s / t - 1, 0);
	return 0;
}