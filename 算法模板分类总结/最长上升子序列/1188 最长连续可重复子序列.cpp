#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5 + 10;

int a[N],g[N],n,len,pos,ans;

int main(){
	int n;cin>>n;
	for(int i = 1;i <= n;i ++) cin>>a[i];

	for(int i = 1;i <= n;i ++){
		if(g[len] < a[i]){
			len++;
		}
		else{
			pos = lower_bound(g + 1, g + len + 1, a[i]) - g;
			g[pos] = a[i];
		}
			
		ans = max(ans, len);
	}
	ans = max(ans, len);
	cout<<ans;
}
