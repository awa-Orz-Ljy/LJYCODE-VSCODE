#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
int n, m, op, x, y;
ll pre[N];

int root(int x){//路径压缩，递推寻找根节点
    return pre[x] = (pre[x] == x ? x : root(pre[x]));
}

void merge(int x,int y){//连接两个点
    pre[root(x)] = root(y);
}

bool iscon(int x,int y){//判断是否连接
    return root(x) == root(y);
}

void solve(){
    cin >> n >> m;
    for (int i = 1; i <= n;i ++)
        pre[i] = i;

    while (m--)
    {
        cin >> op >> x >> y;
        if (op == 1)
            merge(x, y);
        else if(op == 2){
            if (iscon(x,y))//双引号才能引用字符，单引号会报错
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}

int main(){
    int q = 1;
    while(q --)
        solve();
    return 0;
}