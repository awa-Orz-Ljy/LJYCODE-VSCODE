#include<bits/stdc++.h>
using namespace std;

const int N1 = 1e4 + 9;
int v[N1],w[N1],dp[N1];//����volume�ͼ�ֵwealth���ܼ�ֵdp 
int N,V;//�����������󻨷� 
//dp��ָ����ô������������ô�໨�ѣ��õ��ļ�ֵ 
void solve(){
	//���� 
	for(int i = 1;i <= N;i ++) cin>>v[i]>>w[i];
	
	//��i������j����õ��ļ�ֵ
	for(int i = 1;i <= N;i ++){
		for(int j = V;j >= v[i];j --){
			dp[j] = max(dp[j],dp[j - v[i]] + w[i]);
		}
	} 
	cout<<dp[V]<<'\n';
}
int main(){
	cin>>N>>V;
	solve();
	return 0;
}
