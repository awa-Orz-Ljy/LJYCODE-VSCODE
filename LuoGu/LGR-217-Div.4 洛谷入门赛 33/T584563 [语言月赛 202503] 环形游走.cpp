#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
	int n,m,p = 0;cin>>n>>m;
	for(int i = 0;i < n;i ++){
		int num;cin>>num;
		a.push_back(num);
	}
	//移动m次
    while(m --){
        int c = a[p];
        //逆时针移动
        p = (p - c % n + n) % n;
    }
    cout << p + 1 << endl;
	return 0;
}