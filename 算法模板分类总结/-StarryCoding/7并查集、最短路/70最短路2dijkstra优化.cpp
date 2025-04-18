#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 9;
using ll = long long;
const ll inf = 4e18;

ll n, m;

struct Edge{
   ll x, w;
   //重载运算符，左边的和u比较，左边的优先
   bool operator < (const Edge &u)const{
   	if(w != u.w)return w > u.w;
   	return x < u.x;
   }
};

vector<Edge> g[N];//邻接表存出点和权值，结构体

ll d[N];

void dijkstra(int st){
   //1初始化d
   for(int i = 1;i <= n; ++ i) d[i] = inf;
   //2优先队列，bitset<N> vis，以及设置一个起点st并入队
   bitset<N> vis;
   priority_queue<Edge> pq;
   d[st] = 0;
   pq.push({st, d[st]});
   //3更新d,队列非空就一直找
   while(!pq.empty()){
   	int x = pq.top().x;
      pq.pop();
      if (vis[x]) // 核心，拿来记录拓展点
         continue; 
      vis[x] = true;
   	//4更新最优距离
   	for(const auto &t : g[x])
   	{
   		ll w = t.w, y = t.x;
   		if(d[x] + w < d[y])//最开始同一个出点,y只是不同名字的遍历对象
   		{
   			d[y] = d[x] + w;
   			pq.push({y, d[y]});
   		}
   	}
   }
}

void solve(){
   cin >> n >> m;
   for(int i = 1;i <= m; ++ i){//边的个数
   	ll x, y, w;cin >> x >> y >> w;
   	g[x].push_back({y, w});
   }
   dijkstra(1);
   cout << (d[n] == inf ? -1 : d[n]) << '\n';
}

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   int t = 1;
   while(t --)solve();
   return 0;
}