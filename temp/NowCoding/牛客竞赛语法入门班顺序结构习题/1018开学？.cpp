#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int x,n;cin>>x>>n;
	if(x + n <= 7)cout<<x + n<<'\n';
	else cout<<(x + n - 1) % 7 + 1<<'\n';
	return 0;
}