#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
//求解单独存在的数字如4 1 2 1 2会输出4，因为一直做异或
//和0异或为本身，和相同的数字异或为0
//所以异或的结果为0的话说明参与异或计算的两部分是相等的
//奇数个的范围，最后会留下x和a数组元素全体，全部作异或的结果为0
//其他要写出二进制来算，不过没必要
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int _=1;cin>>_;
	while(_ --)
	{
		int n;cin>>n;
		ll ans = 0;
		for(int i = 1;i <= n; i++)
		{
			int x;cin>>x;
			ans ^= x;//异或运算符
		}
		cout<<ans<<'\n';
	}
	return 0;
}