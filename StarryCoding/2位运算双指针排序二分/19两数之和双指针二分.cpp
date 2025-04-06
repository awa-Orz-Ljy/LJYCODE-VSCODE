//给一个大小为n的数组a和一个m，求符合a[i] + a[j] > m的ij二元组的对数
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int const N = 2e5 + 5;
ll a[N];

int main() {
    ll n, m; cin >> n >> m;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1,a + n + 1);

    ll ans = 0,l = 1, r = n;
        while (l + 1 != r) {
            if (a[r] + a[l] > m){//从大的数找会更快找到
            	ans += r - l;
            	r --;
            }
            else l ++;//反之，则移动l
        }
    cout << ans;
    return 0;
}