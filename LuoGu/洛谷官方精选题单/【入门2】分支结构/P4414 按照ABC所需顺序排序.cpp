#include <bits/stdc++.h>
using namespace std;

int a[3];
char A, B, C;
int main()
{
    cin >> a[0] >> a[1] >> a[2];
    cin >> A >> B >> C; // 所需顺序
    sort(a, a + 3);
    // cout << a[0] << a[1] << a[2];
    cout << a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];
    return 0;
}