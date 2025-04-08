#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N];

void solve()
{
	int n,q;cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>a[i];
	while(q--)
	{
		int x;cin>>x;
		int l = 1,r = n;
		while(l < r)//标准判定
		{
			int mid = (l + r) >> 1;
			if(a[mid] < x) l = mid + 1;//左边界右移,要加1
			else r = mid;//右边界左移
		}
		if(a[r] == x)
			cout << r << ' ';
		else
			cout << -1 << ' ';
	}
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _ = 1;
	while(_ --)solve();
	return 0;
}