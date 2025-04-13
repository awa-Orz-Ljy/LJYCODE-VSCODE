#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, ans;
vector<int> path;
void dfs(int sum, int last) // k
{
    if (sum == n)
    { // 记录答案
        // for (auto &p : path)
        //     cout << p << " ";
        // cout<<'\n';
        // if (path.size() == k)
        ans++;
        return;
    }
    if (sum < n) // 向下递归，改变函数参数
    {
        for (int i = last; i <= n - sum; i++)
        {
            // path.push_back(i);
            dfs(sum + i, i); // k
            // path.pop_back();
        }
    }
}

int main()
{
    cin >> n;
    dfs(0, 1); // k
    cout << ans;
}