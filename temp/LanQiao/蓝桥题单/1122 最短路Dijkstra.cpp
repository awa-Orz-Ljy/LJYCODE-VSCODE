#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5 + 9;
const ll inf = 4e18;

ll n, m, u, v, w;
ll d[N];

struct Edge{
    ll x, w;//出点权值
    bool operator < (const Edge &u) const {
        if(w != u.w)
            return w > u.w;
        else
            return x < u.x;
    }
};
vector<Edge> g[N];

void dijkstra(ll st){
    for (int i = 1; i <= n;i ++)
        d[i] = inf;
    bitset<N> vis;
    priority_queue<Edge> pq;
    d[st] = 0;
    pq.push({st, d[st]});
    while(!pq.empty()){
        ll x = pq.top().x;
        pq.pop();
        if(vis[x])
            continue;
        else
            vis[x] = true;
        for(auto &t : g[x]){
            ll w = t.w, y = t.x;
            if(d[x] + w < d[y]){
                d[y] = d[x] + w;
                pq.push({y, d[y]});
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 1;i <= m;i ++){
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n;i ++)
        cout << (d[i] == inf ? -1 : d[i]) << ' ';
    return 0;
}