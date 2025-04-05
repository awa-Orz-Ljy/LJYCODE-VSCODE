#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll a[N];//要考虑开longlong
int main(){
    ll ans = 0;
    int n,q;cin>>n>>q;
    for(int i = 1;i <= n;i ++) cin>>a[i];
    for(int i = 1;i <= n;i ++) ans += a[i];

    while(q --){
        int l,r;cin>>l>>r;
        int len = r - l + 1;
        if(len & 1) ans += l + len/2;
        else ans -= len/2;
    }
    
    cout<<ans<<endl;
    return 0;
}