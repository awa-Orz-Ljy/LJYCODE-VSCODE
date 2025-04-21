#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int s1 = 5 * x, s2 = 3 * x + 11;
    if (s1 < s2)
        cout << "Local";
    else if (s1 > s2)
        cout << "Luogu";
    return 0;
}