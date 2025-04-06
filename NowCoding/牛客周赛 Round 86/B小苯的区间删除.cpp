#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;

int x[N];
ll dp[N];

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int T;cin>>T;
	while(T --){
		int n,l;cin>>n>>l;
		for(int i = 1;i <= n;i ++) cin>>x[i];
		bool equal = true;
		for(int i = 2;i <= n;i ++){
			if(x[i] != x[1]){
				equal = false;
				break;
			}
		}
		if(equal){
			ll sum = 0;
			for(int i = 1;i <= n;i ++){
				sum += x[i];
			}
			cout<<sum<<endl;
		}
		else{
		dp[0] = 0;
			for(int i = 1;i <= n;i ++){
				dp[i] = dp[i - 1] + x[i];
				for(int j = 1;j <= min(i,l);j ++){
					dp[i] = max(dp[i],dp[i - j]);
				}
			}
			cout<<dp[n]<<endl;
			}
		}
	return 0;
}