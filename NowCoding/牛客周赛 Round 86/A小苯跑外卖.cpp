#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;



int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int a,b;cin>>a>>b;
	if(b%a)cout<<b/a + 1;
	else cout<<b/a;	
	
	return 0;
}