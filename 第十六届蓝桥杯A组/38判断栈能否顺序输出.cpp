#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;

int a[N],pos;

void solve()
{
	int n;cin>>n;
	for(int i = 1;i<=n;i++)cin>>a[i];//输入数据
	
	stack<int> stk;//设置中间空栈
	pos = 1;//右边的第几辆
	for(int i = 1;i<=n;i++)//决定1234的序列输出，控制每一轮循环i的值
	{
		while(pos<=n && (stk.empty() || stk.top()!=i )){
			stk.push(a[pos]);//右边插到中间，直到合适的栈顶出现
			pos++;
		} 
		if(stk.top() == i){
			stk.pop(); // 栈顶满足条件即送出栈顶元素
		}
		else{
			cout<<"No"<<'\n';
			return;
		}
	}
	cout<<"Yes"<<'\n';//循环能够结束说明成功了，输出yes即可
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _ = 1;
	while(_ --)solve();
	return 0;
}