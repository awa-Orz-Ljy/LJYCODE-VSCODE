#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;cin>>a>>b>>c>>d;
	int a1 = abs(a+b-c-d);
	int a2 = abs(a+c-b-d);
	int a3 = abs(a+d-b-c);
	cout<<min({a1,a2,a3})<<'\n';
	return 0;
}