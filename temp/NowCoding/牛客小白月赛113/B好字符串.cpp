#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;

bool check(const string &s,int del){
	char pre = '\0';
	for(int i = 1;i <= s.size();i ++){
		if(i == del) continue;
		if(s[i] == pre) return false;
		pre = s[i];
	}
	return true;
}

bool solve(const string &s){
	for(int i = 1;i <= s.size();i ++){
		if(s[i] == s[i - 1]) return check(s,i - 1)||check(s,i);
	}
	return true;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;string s;
	cin>>n>>s;
	if(solve(s)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}