#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;

struct rn{
	ll a;
	ll b;
	ll diff;
};

bool cmp(const rn& r1,const rn& r2){
	return r1.diff > r2.diff;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;cin>>n;
	vector<rn> rn(n);
	for(int i = 0;i < n;i ++){
		cin>>rn[i].a>>rn[i].b;
		rn[i].diff = rn[i].a - rn[i].b;
	}
	sort(rn.begin(),rn.end(),cmp);
	
	ll ans = 0;
	int mid = n/2;
	for(int i = 0;i < mid;i ++)ans += rn[i].a;
	for(int i =mid;i < n;i ++)ans += rn[i].b;
	cout<<ans;	
	return 0;
}