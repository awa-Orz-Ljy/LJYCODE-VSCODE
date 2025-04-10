#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1;i <= n;++ i){//层数
		for(int j = 1;j <= n - i;++ j)printf(" ");//空格数
		for(int k = 1;k <= 2 * i - 1;++ k)printf("*");
	printf("\n");
	}
	
	for(int i = n -1;i >= 1;i--){//层数改变即可
		for(int j = n - i;j >= 1;j--)printf(" ");//空格数
		for(int k = 2 * i - 1;k >= 1;k--)printf("*");
	printf("\n");
	}
	return 0;
}