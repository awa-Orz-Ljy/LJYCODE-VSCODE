#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 10;
int a[N];
map<ll, ll> m;
int n;
ll c, ans = 0;
int main()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        a[i] -= c;
    }
    for (int i = 1; i <= n; i++)
        ans += m[a[i]];
    cout << ans << endl;
    return 0;
}