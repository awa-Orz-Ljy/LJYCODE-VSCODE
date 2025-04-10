#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;

int a[N],b[N],c[N];


int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m,k;cin>>n>>m>>k;
	for(int i = 1;i <= n;i ++)cin>>a[i];	
	for(int i = 1;i <= m;i ++)cin>>b[i];
	for(int i = 1;i <= k;i ++)cin>>c[i];
	int max_power = 0;
    // 遍历所有面包、火腿肠和牛奶的组合
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            for (int t = 1; t <= k; ++t) {
                // 计算当前组合的动力
                int power = (a[i] * b[j]) % c[t];
                // 更新最大动力
                max_power = max(max_power, power);
            }
        }
    }

    cout << max_power << endl;
	return 0;
}