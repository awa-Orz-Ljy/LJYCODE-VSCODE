#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,ans;
bool check(int x){
    int cnt = 1;
    while(x != 0){
        if(cnt % 2 != 0){
            if(x % 10 % 2 == 0) return false;
        }
        else{
            if(x % 10 % 2 != 0) return false;
        }
        x /= 10;
        cnt ++;
    }
    return true;
}
void solve(){
   cin>>n;
   for(int i = 1;i <= n;i ++){
        if(check(i)) ans ++;
   }
   cout<<ans;
}
int main(){
    int t = 1;
    while(t --) solve();
    return 0;
}