#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;



int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string s;cin>>s;
	int sum = 1;bool flag = false;
	for(char c : s){
		if(c == '-') sum -= 1;
		else if(c == '*') sum *= 2;
		if(sum >= 2025){
			flag = true;
			break;
		}
	}
	if(flag) cout<<"Yes"<<endl;
	else cout<<"No"<<endl; 
	return 0;
}