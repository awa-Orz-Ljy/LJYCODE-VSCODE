#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const ll N = 2e5 + 9;

map<ll, vector<ll>> t1, t2;
ll a[N], b[N], n, m, u, v, ans;
void dfs(ll x,ll y,ll cnt){
    if(a[x] != b[y]){
        return;
    }
    ans = max(ans, cnt + 1);//更新答案
    for (ll i = 0; i < t1[x].size();i ++){
        for (ll j = 0; j < t2[y].size();j ++){
            ll x1 = t1[x][i];
            ll y1 = t2[y][j];
            dfs(x1, y1, cnt + 1);
        }
    }
}

int main(){
    cin >> n >> m;
    for (ll i = 1; i <= n;i ++){
        cin >> a[i];
    }
    for (ll i = 1; i <= m; i++){
        cin >> b[i];
    }
    for (ll i = 1; i <= n - 1;i ++){
        cin >> u >> v;
        t1[u].push_back(v);
    }
    for (ll i = 1; i <= m - 1;i ++){
        cin >> u >> v;
        t2[u].push_back(v);
    }
    dfs(1, 1, 0);
    cout << ans;
    return 0;
}
