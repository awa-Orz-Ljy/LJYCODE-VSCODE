#include<stdio.h>
int main(){
	char s[] = "hello world";
	for(int i = 0;s[i] != 0;++ i)printf("%c",s[i] + 1);
	return 0;
}