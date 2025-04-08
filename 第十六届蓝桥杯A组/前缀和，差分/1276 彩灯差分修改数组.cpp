//若为负数则输出0
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5 + 9;
ll a[N],s[N];
ll n,q,l,r,x;
void solve(){
    for(int i = 1;i <= n;i ++) cin>>a[i];
    
    for(int i = 1;i <= n;i ++) s[i] = a[i] - a[i - 1];
    while(q --){
        cin >> l >> r >> x;
        s[l] += x;
        s[r + 1] -= x;
    }

    for(int i = 1;i <= n;i ++){
        a[i] = a[i - 1] + s[i];
    }    

    for(int i = 1;i <= n;i ++)
        if (a[i] < 0)
            a[i] = 0, cout << a[i] << ' ';
        else
            cout << a[i] << ' ';
}

int main(){
    cin>>n>>q;
    solve();
    return 0;
}