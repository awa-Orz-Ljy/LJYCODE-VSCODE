#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;



int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n = 16,ans = 0;
	for(int i = 1;i <= n;i ++){
		ans += i * (i + 1)/2;
	}
	cout<<ans;
	return 0;
}