#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Solider
{
    ll p, c;
}a[1000005];

bool compare(const Solider &a, const Solider &b)
{
    return a.c < b.c;
}

int main()
{
    int n;
    long long S;
    cin >> n >> S;
    for (int i = 1; i <= n; i++)
        cin >> a[i].p >> a[i].c;
    sort(a + 1, a + 1 + n, compare);

    long long sum = 0;
    int loc = 0;
    for (int i = n; i >= 1; i--)
    {
        sum += a[i].p;
        if (sum >= S)
        {
            loc = i;
            break;
        }
    }

    long long ans = a[loc].c * S;
    for (int i = loc + 1; i <= n; i++)
        ans += (long long)(a[i].c - a[loc].c) * a[i].p;
    cout << ans;

    return 0;
}