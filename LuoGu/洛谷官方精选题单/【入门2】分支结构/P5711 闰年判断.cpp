#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 400 == 0 || (n % 4 == 0) && (n % 100) != 0) // 400取余为零 或 4取余为零100取余不为零
        cout << 1;
    else
        cout << 0;
    return 0;
}