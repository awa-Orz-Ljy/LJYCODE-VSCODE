#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+9;

struct Book
{
	int a,b,c;
	
	bool operator < (const Book &u)const//重载运算符,<重塑的对象是book的u（用来指代后者的）注意类型和&
	{
		if(a != u.a)
			return a > u.a;
		if(b != u.b)
			return b > u.b;
		if(c != u.c)
			return c > u.c;
	}
	
}p[N];

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i].a>>p[i].b>>p[i].c;
	}
	
	sort(p+1,p+1+n);//表示数组的1到n+1
	
	for(int i=1;i<=n;i++)
	{
		cout<<p[i].a<<' '<<p[i].b<<' '<<p[i].c<<'\n';
	}
	return 0;
}