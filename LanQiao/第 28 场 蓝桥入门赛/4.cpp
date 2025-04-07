#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int a[N];
void solve(){
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n;i ++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    if(a[1] <= m && a[n] >= m)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main(){
    int T;
    cin >> T;
    while(T --)
        solve();
    return 0;
}