#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	cin>>a>>b>>c;
	if(max(a,b) <= c)cout<<"None";
	else{
		if(a > b)cout<<"LeftToRight";
		else if(a == b)cout<<"None";
		else cout<<"RightToLeft";
	}
	return 0;
}