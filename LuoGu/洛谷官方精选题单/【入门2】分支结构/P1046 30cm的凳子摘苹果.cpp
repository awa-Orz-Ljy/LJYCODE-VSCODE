#include <bits/stdc++.h>
using namespace std;

int a[11];

int main()
{
    int cnt = 0;
    for (int i = 1; i <= 10; i++)
        cin >> a[i];
    for (int i = 1; i <= 10; i++)
    {
        int l;
        cin >> l;
        if (l + 30 >= a[i])
            cnt++;
    }

    cout << cnt;
}
