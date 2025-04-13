#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6;
void solve(){
    string s;
    cin >> s;
    int ans = 0,l = 0,r = s.length() - 1;
    while(l <= r){
        if(s[l] != s[r]){
            cout<<"N";
            return;
        }
        l++;
        r--;
    }
    cout<<"Y";
}
int main(){
    int q = 1;
    while(q --) solve();
    return 0;
}