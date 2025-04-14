//用数组的元素能够组成多少种组合数字？
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 5e3 + 9,M = 5e5 + 9;//每个数都可以取最大的100，且n取值在5e3以内，故做加法应该可以到5e5:)

int a[N];

void solve()//bitset solution
{
	int n;cin>>n;
	for(int i = 1;i<= n;i++){
		cin >> a[i];
	}

	bitset<M> bs;
	bs[0] = 1;//表示可以取到这个数，即0

	for(int i = 1;i <= n; i ++){
		bs |= (bs << a[i]);//移动的是bs[0]的位置，进行或运算，移动a[i]的长度表示取得新的组合和
	}
	cout<<bs.count()<<'\n';
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _=1;
	while(_--)solve();
	return 0;
}