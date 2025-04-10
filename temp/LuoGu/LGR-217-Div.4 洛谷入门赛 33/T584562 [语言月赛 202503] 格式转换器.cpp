#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
	int n;cin>>n;
	for(int i = 0;i < n;i ++){
		int num;cin>>num;
		a.push_back(num);
	}
	for(int i = 0;i < n;i ++){
		if(i > 0)cout<<",";
		cout<<a[i];
	}
	return 0;
}