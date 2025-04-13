// #include<bits/stdc++.h>
// using namespace std;
// int ans = 0;
// void dfs(int n,int sum){
//     if(n >= 31 || sum == 100){
//         return;
//     }
//     if(sum == 70){
//         ans ++;
//     }
//     dfs(n + 1,sum + 10);
//     dfs(n + 1,0);
// }
// int main(){
//     dfs(0,0);
//     cout<<ans;
//     return 0;
// }
#include <iostream>
using namespace std;
/*
1.没有做完30题，7个10分结束
2.做完30题，得70分，则24-30全对且23错误（前22题没有连续正确10题）
*/
int ans = 0;
void dfs(int step, int score)
{
    if (score + 10 * (30 - step) < 70)
        return; // 剪枝，在当前step下，即使剩下题全对，也无法70分
    if (step > 30)
        return;
    if (score == 100)
        return;
    if (score == 70)
        ans++; // 可能先得了70，80，90但之后分数又归零
    dfs(step + 1, score + 10);
    dfs(step + 1, 0);
}
int main()
{
    dfs(0, 0);
    cout << ans;
    return 0;
}