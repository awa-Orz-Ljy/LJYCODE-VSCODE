#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 1e5 + 10;
ll a[N], diff[N], pre[N];
void _solve2()
{
	int n, p, q;//p次修改，q次求和
	cin >> n >> p >> q;

	// 输入，构建查分数组
	for (int i=1; i <= n; i++){
		cin >> a[i];
		diff[i] = a[i] - a[i - 1];
	}
	//进行修改
	while (p--) {
		int l, r, x;
		cin >> l >> r >> x;
		diff[l] += x;
		diff[r + 1] -= x;
	}
	//还原数组，构建前缀和
	for (int i=1; i <= n; i++){
		a[i] = a[i - 1] + diff[i];
		pre[i] = pre[i - 1] + a[i];
	}
	//进行区间求和
	 while (q--) {
	 	int l, r;
	 	cin >> l >> r;
	 	cout << pre[r] - pre[l - 1] << '\n';
	}
	/*for (int i = 1; i <= n; i++)
	if(a[i] < 0)
		cout << 0 << ' ';
	else
		cout << a[i] << ' ';
	*/
}
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	_solve2();
	return 0;
}
