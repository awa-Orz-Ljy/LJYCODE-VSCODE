#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	if(n % 2 == 0)cout<<n/2<<'\n';
	else cout<<3*n + 1<<'\n';
	return 0;
}