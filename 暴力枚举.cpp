#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 100000000;
ll cnt;
void check(){
    for (int i = 1; i <= N; i++)
    {
        string s = to_string(i);
        
        
        if(s.length() % 2 != 0) continue;
        int mid = s.length() / 2;
        int st = 0, end = s.length() - 1;
        int stsum = 0, edsum = 0;
        for (int i = 0; i < mid; i++)
        {
            stsum += s[i] - '0';
        }
        for (int j = mid; j < s.length(); j++)
        {
            edsum += s[j] - '0';
        }
        if (stsum == edsum) cnt ++;
    }
}

int main(){
    check();
    cout << cnt;
    return 0;
}

