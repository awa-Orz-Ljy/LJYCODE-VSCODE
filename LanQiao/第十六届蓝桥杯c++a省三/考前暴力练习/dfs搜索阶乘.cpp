#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 2;

int main()
{
    int n,i = 0;
    cin >> n;
    while ((i * (i + 1)) < 2 *n ){
        i += 1;
    } 
    cout << i;
    return 0;
}