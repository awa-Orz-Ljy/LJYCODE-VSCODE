#include<bits/stdc++.h>
using namespace std;
void solve(){
	int m,sum = 0;cin>>m;
	vector<int> a(m);
	for(int i = 0;i < m;i ++){
		cin>>a[i];
		sum += a[i];
	}
	
	int max,min;
	max = *max_element(a.begin(),a.end());
	min = *min_element(a.begin(),a.end());
	printf("%d ",max - min);
	
	double ave,s = 0;
	ave = (double)sum/m;
	for(int i = 0;i < m;i ++){
		s += (a[i] - ave)*(a[i] - ave);//s += pow((a[i] - ave),2);
	}
	s /= m;
	printf("%.3f\n",s);
}

int main(){
	int n;cin>>n;
	while(n--)solve();
	return 0;
}