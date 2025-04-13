#include<bits/stdc++.h>
using namespace std;

const int N1 = 1e4 + 9;
int v[N1],w[N1],dp[N1];//花费volume和价值wealth和总价值dp 
int N,V;//最大数量和最大花费 
//dp是指有这么多数量，有这么多花费，得到的价值 
void solve(){
	//输入花费和价值
	for(int i = 1;i <= N;i ++) cin>>v[i]>>w[i];
	
	//在i数量，j花费得到的价值，从右往左
	for(int i = 1;i <= N;i ++){
		for(int j = V;j >= v[i];j --){
			dp[j] = max(dp[j],dp[j - v[i]] + w[i]);
		}
	} 
	cout<<dp[V]<<'\n';
}
int main(){
	cin>>N>>V;
	solve();
	return 0;
}
/*
for(int i = 1;i <= n;i ++)cin>>v[i]>>w[i];
for(int i = 1;i <= N;i ++){
	for(int j = V;j <= v[i];j --){
		dp[j] = max(dp[j],dp[j - v[i]] + w[i]);
	}
}
*/