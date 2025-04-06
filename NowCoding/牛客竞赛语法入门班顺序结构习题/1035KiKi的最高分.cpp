#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,r;cin>>n>>m>>r;
	if(n > m&&n > r)cout<<n<<endl;
	else if(m > n&&m > r)cout<<m<<endl;
	else cout<<r<<endl;
	return 0;
}
