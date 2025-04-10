#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1000;
const ll INF = 0x3f3f3f3f3f3f;
ll d[N][N],n,m,q,u,v,w;  

void solve(){
	memset(d,0x3f,sizeof d);
	for(int i = 1;i <= m;i ++){
		cin>>u>>v>>w;
		d[u][v] = min(d[u][v],w); 
		d[v][u] = min(d[v][u],w); 
	}
	for(int i = 1;i <= n;i ++) d[i][i] = 0; 
	for(int k = 1;k <= n;k ++){
		for(int i = 1;i <= n;i ++){
			for(int j = 1;j <= n;j ++){
				d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
			}
		}
	}
	while(q --){
		cin>>u>>v;
		cout<<(d[u][v] >= INF ? -1 : d[u][v])<<'\n';	
	} 
	
}

int main(){
	cin>>n>>m>>q;
	solve();
	return 0;
} 
