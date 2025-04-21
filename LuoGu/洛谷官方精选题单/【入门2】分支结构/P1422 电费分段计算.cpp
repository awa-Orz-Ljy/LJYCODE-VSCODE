#include <bits/stdc++.h>
using namespace std;
int main()
{
    double ans;
    int n;
    cin >> n;
    if (n > 0 && n <= 150)
        ans = 0.4463 * n;
    else if (n > 150 && n <= 400)
        ans = 150 * 0.4463 + (n - 150) * 0.4663;
    else if (n > 400)
        ans = 0.5663 * (n - 400) + 150 * 0.4463 + 250 * 0.4663;
    printf("%.1lf",ans);
    return 0;
}