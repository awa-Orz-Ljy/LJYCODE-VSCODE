#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = (c * 60 + d - a * 60 - b) / 60;
    int f = (c * 60 + d - a * 60 - b) % 60;
    cout << e <<' '<< f;
    return 0;
}