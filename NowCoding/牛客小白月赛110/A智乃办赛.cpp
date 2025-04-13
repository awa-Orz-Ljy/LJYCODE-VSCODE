#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;

	char letter = 'A' + (n - 1)/500;
	
	int num = (n - 1)%500 + 1;
	
	cout<<letter<<setfill('0')<<setw(3)<<num<<endl;
	
	return 0;
}
