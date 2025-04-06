#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,s;
	scanf("%02d:%02d",&m,&s);
	if(!m && !s)printf("00:00:00");
	else printf("23:%02d:%02d",59-m,60-s);
	return 0;
}