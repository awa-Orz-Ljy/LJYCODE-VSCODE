#include <bits/stdc++.h>
using namespace std;
int d[4];
int main()
{
    for (int i = 1; i <= 3; i++)
        cin >> d[i];
    sort(d + 1, d + 4);
    
    if (d[1] <= 0 || d[2] <= 0 || d[3] <= 0 || d[1] + d[2] <= d[3])
        cout << "Not triangle" << '\n';
    else
    {
        //锐角直角钝角的判断
        if (d[1] * d[1] + d[2] * d[2] > d[3] * d[3])
            cout << "Acute triangle" << '\n';
        else if (d[1] * d[1] + d[2] * d[2] == d[3] * d[3])
            cout << "Right triangle" << '\n';
        else if (d[1] * d[1] + d[2] * d[2] < d[3] * d[3])
            cout << "Obtuse triangle" << '\n';
        //等腰要先判定，因为等边可以是等腰
        if (d[1] == d[2] || d[1] == d[3] || d[2] == d[3])
            cout << "Isosceles triangle" << '\n';
        //等边
        if (d[1] == d[2] && d[2] == d[3])
            cout << "Equilateral triangle" << '\n';
    }
    return 0;
}