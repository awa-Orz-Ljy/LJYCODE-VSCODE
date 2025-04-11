#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Solider
{
    int p, c;
} a[1000005];

int main()
{
    int n;
    ll s;
    cin >> n >> s;
    int maxc = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i].p >> a[i].c;
        maxc = max(maxc,a[i].c);
    }
    ll ans = (ll)9e18;
    for (int k = 0; k <= maxc; k++){
        ll temp = k * s;
        for(int j = 1;j <= n;j ++){
            
            temp =temp + 1ll * max(0 , (a[j].c - k) * a[j].p);
        }
        ans = min(ans,temp);
    }
    cout<<ans;
    return 0;
}