#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Solider
{
    ll p, c;
} soldiers[1000005];

bool compare(const Solider &a, const Solider &b)
{
    return a.c < b.c;
}

int main()
{
    ll n, S;
    cin >> n >> S;

    ll total = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> soldiers[i].p >> soldiers[i].c;

        total += soldiers[i].p;
    }

    sort(soldiers + 1, soldiers + 1 + n, compare);

    int tm = 0;
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (total > S)
        {
            res += S * (soldiers[i].c - tm);
            tm += (soldiers[i].c - tm);
            total -= soldiers[i].p;
        }
        else
        {
            res += soldiers[i].p * (soldiers[i].c - tm);
        }
    }

    cout << res << endl;

    return 0;
}