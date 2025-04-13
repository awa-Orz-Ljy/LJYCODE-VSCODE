#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin>>a;
	cout<<a/3600<<" "<<a%3600/60<<" "<<a%3600%60<<'\n';
	return 0;
}
//整除得到结果，取余是为了下一步的计算