#include<bits/stdc++.h>
using namespace std;

int count2(int l,int r){
	int count = 0;
	for(int i = l;i <= r;i ++){
	int num = i;
	while(num > 0){
		if(num % 10 == 2)
			count ++;
		num /= 10;
		}
	}
	return count;
}
int main(){
	int l,r,tc = 0;cin>>l>>r;
	tc = count2(l,r);
	cout<<tc<<'\n';
	return 0;	
}