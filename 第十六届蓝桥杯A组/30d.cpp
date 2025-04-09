#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
//找全排列
ll n;
bitset<N> vis;
ll a[N];
void dfs(int dep){
    if(dep == n + 1){
        for (int i = 1; i <= n;i ++){
            cout << a[i] << " \n"[i == n];
        }
    }
    for (int i = 1; i <= n;i ++){
        if(vis[i]){
            continue;
        }
        else{
            vis[i] = true;
            a[dep] = i;
            dfs(dep + 1);
            a[dep] = 0;
            vis[i] = false;
        }
    }
}
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    dfs(1);
    return 0;
}