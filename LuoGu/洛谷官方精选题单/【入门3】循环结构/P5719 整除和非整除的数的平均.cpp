#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnta = 0, cntb = 0;
    double suma = 0, sumb = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {

            suma += i;
            cnta++;
        }
        else
        {
            sumb += i;
            cntb++;
        }
    }
    printf("%.1lf %.1lf", suma / cnta, sumb / cntb);
}