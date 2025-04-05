#include<iostream>
#include<algorithm>
using namespace std;
const int N = 5e5 + 9;
int a[N]; 
int main(){
	int n;cin>>n;
	for(int i = 1;i <= n;i ++) cin>>a[i];
	
	sort(a + 1,a + n + 1);
	for(int i = 1;i <= n;i ++) cout<<a[i]<<' ';
	cout<<endl;
	sort(a + 1,a + n + 1,greater<int>());
	for(int i = 1;i <= n;i ++) cout<<a[i]<<' ';
	return 0;
}
