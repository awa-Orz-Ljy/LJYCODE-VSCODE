#include <iostream>

using namespace std;

int main()
{
    int y, m;
    cin >> y >> m;
    int d;

    if (m == 2)
    {
        if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))
            d = 29;//闰年多一天
        else
            d = 28;//正常年为28天
    }
    else
    {
        if (m == 4 || m == 6 || m == 9 || m == 11)
            d = 30;//其他月份的判定，因为七八月份特殊
        else
            d = 31;
    }
    
    cout<<d;
    return 0;
}