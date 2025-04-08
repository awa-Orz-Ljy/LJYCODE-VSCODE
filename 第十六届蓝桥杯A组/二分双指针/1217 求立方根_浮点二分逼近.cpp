#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

void solve(){
    double n;cin>>n;
    double l = 0,r = N,mid,ans;
    while(r - l > 1e-5){
        mid = (l + r)/2;
        if(mid * mid * mid > n) r = mid - 1e-5;
        else l = mid + 1e-5,ans = mid;
    }
    printf("%.3lf\n",ans);
}

int main(){
    int T;cin>>T;
    while(T --) solve();
    return 0;
}