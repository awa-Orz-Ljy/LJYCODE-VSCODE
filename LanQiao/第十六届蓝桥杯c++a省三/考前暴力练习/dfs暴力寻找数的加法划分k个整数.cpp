#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, ans;
vector<int> path;
void dfs(int sum, int last, int k) // k
{
    if (sum == n && path.size() == k)
    {
        for (auto &u : path)
        {
            cout << u << ' ';
        }
        cout << '\n';

        ans++;
        return;
    }
    if (sum < n && path.size() < k) // 向下递归，改变函数参数
    {
        for (int i = last; i <= n - sum; i += 2)
        {

            path.push_back(i);
            dfs(sum + i, i + 2, k);
            path.pop_back();
        }
    }
}

int main()
{
    cin >> n >> k;
    dfs(0, 1, k); // k
    cout << ans;
}