#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p;
    p = (a + b + c) / 2;
    double s;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2lf", s);
    return 0;
}