#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int a[N],vis[N],sum,n,ans;

void dfs(int depth,int sum){
    if(depth > n){
        ans = max(ans,sum);
        return ;
    }
    for(int i = 1;i <= n;i ++){
        if(!vis[i]){
            vis[i] = 1;
            int add = 0;
            if(a[i] == depth) add = depth;
            dfs(depth + 1,sum + add);
            vis[i] = 0;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    dfs(1,1);
    // sort(a + 1, a + n + 1); // 排序准备用 next_permutation

    // int ans = 0;

    // do
    // {
    //     int sum = 0;
    //     for (int i = 1; i <= n; ++i)
    //     {
    //         if (a[i] == i)
    //         {
    //             sum += i; // 索引是从0开始，第x张牌是i+1
    //         }
    //     }
    //     ans = max(ans, sum);
    // } while (next_permutation(a + 1, a + n + 1));
    cout << ans - 1;
    return 0;
}