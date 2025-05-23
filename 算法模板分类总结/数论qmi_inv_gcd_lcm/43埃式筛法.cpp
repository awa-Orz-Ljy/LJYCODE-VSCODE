#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e6 + 9;

bitset<N> vis;
void solve()
{
   int n;
   cin >> n;
   // 不是质数为true，由质数去标记是不是质数的数字
   vis[0] = vis[1] = true;
   for (ll i = 2; i <= n; ++i)
      if (!vis[i])
      { /// 是质数就用步长为i去遍历不是质数的数
         for (ll j = i * i; j <= n; j += i)
            vis[j] = true;
      }

   for (int i = 1; i <= n; ++i)
      if (!vis[i])//是质数就输出
         cout << i << ' ';
}

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   solve();
   return 0;
}