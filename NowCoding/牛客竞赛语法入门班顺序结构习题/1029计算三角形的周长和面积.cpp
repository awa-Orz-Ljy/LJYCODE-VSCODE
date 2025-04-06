#include<bits/stdc++.h>
using namespace std;
int main(){
	double area,cir,p;
	int a,b,c;cin>>a>>b>>c;
	if(a + b > c&&a + c > b&&b + c >a){
	cir = a + b + c;
	p = cir/2;
	area = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("circumference=%.2f area=%.2f",cir,area);
	}
	return 0;
}