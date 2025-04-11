#include <bits/stdc++.h>
using namespace std;
int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int bh[] = {13, 1, 2, 3, 5, 4, 4, 2, 2, 2};
bool leap(int year)
{
    return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
}

int main()
{
    int ans = 0;
    for (int year = 2000; year <= 2024; year++)
    {
        if (leap(year))
            month[2] = 29;
        else
            month[2] = 28;
        int y1 = year / 1000;
        int y2 = year / 100 % 10;
        int y3 = year / 10 % 10;
        int y4 = year % 10;
        for (int m = 1; m <= 12; m++)
        {
            for (int day = 1; day <= month[m]; day++)
            {
                int m1 = m / 10;
                int m2 = m % 10;
                int d1 = day / 10;
                int d2 = day % 10;

                int cnt = bh[y1] + bh[y2] + bh[y3] + bh[y4] + bh[m1] + bh[m2] + bh[d1] + bh[d2];
                if (cnt > 50)
                    ans++;
                if (year == 2024 && m == 4 && day == 13)
                    cout << ans;
                   
            }
        }
    }
    return 0;
}