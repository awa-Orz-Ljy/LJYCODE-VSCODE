#include <iostream>
using namespace std;
int x;
bool a, b;
int main()
{
    cin >> x;
    a = !(x & 1), b = (x > 4 && x <= 12);                                     // 条件
    cout << (a & b) << ' ' << (a | b) << ' ' << (a ^ b) << ' ' << (!a && !b); // 都满足，任意一个满足，一个满足一个不满足，都不满足
}