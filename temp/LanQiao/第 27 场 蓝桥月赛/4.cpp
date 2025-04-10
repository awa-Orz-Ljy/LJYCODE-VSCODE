#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;cin>>n;
	vector<int> a(n),b(n);
	for(int i = 0;i < n;i ++) cin>>a[i];
	for(int i = 0;i < n;i ++) cin>>b[i];
	
	sort(a.begin(),a.end(),greater<int>());
	
	int ans = 0,i = 0,j = 0;
    while (i < n && j < n) {
        if (a[i] > b[j]) {
            // 蓝队队员拳头大小大于红队队员，胜利次数加 1
            ++ans;
            ++i;
            ++j;
        } else {
            // 蓝队队员拳头大小小于等于红队队员，移动蓝队指针
            ++i;
        }
    }

    std::cout << ans << std::endl;


	return 0;
}