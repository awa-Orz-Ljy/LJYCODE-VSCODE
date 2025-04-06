#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	scanf("%d",&a);
	a = abs(a);
	printf("%d",(a/10)%10);
	return 0;
}