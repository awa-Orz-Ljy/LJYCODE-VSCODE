#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;

ll res, a, x;

void solve(){
    cin >> x;
    a = 1;
    while(x){
        res += (x % 10) * a;
        a = a * 9;
        x /= 10;
    }
}

int main(){
    solve();
    cout << res;
    return 0;
}