#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;



int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string s;cin>>s;
	ll l = 0,la = 0,lan = 0;
	for(char c : s){
		if(c == 'l') l ++;
		else if(c == 'a') la += l;
		else if(c == 'n') lan += la;
	}
	cout<<lan;
	return 0;
}