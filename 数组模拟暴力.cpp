#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 200;

int a[N], n, k;

int main()
{
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    k %= n;
    
    for(int i = 1;i <= k;i ++){
        int temp = a[n];
        for (int j = n; j >= 2; j--)
        {
            a[j] = a[j - 1];
        }
        a[1] = temp;
    }
    

    for (int i = 1; i <= n; i++)
    {
        cout << a[i]<<' ';
    }
    return 0;
}
