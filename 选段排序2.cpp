#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
ll n, p, q, l, r, ans;
ll a[N];
void solve()
{
    cin >> n >> p >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int l = 1; l <= n; l++)
    {
        vector<ll> temp;
        for (int r = l; r <= n; r++)
        {

            
            auto pos = lower_bound(temp.begin(),temp.end(),a[r]);
            temp.insert(pos,a[r]);
            ans = max(ans, temp[q - 1] - temp[p - 1]);
        }
    }
    cout << ans;
}
int main()
{
    int t = 1;
    while (t--)
        solve();
}