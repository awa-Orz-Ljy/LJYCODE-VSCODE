#include <bits/stdc++.h>
using namespace std;

// 计算最大公约数
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int n = 20, m = 21;         // 横坐标范围为0到19，纵坐标范围为0到20
    set<pair<int, int>> slopes; // 用于存储唯一的斜率

    // 遍历所有点
    for (int x1 = 0; x1 < n; x1++)
    {
        for (int y1 = 0; y1 < m; y1++)
        {
            for (int x2 = x1 + 1; x2 < n; x2++)
            {
                for (int y2 = 0; y2 < m; y2++)
                {
                    if (x1 == x2 && y1 == y2)
                        continue;

                    int dx = x2 - x1; // x坐标差
                    int dy = y2 - y1; // y坐标差

                    if (dx == 0)
                    {                          // 处理垂直线
                        slopes.insert({1, 0}); // 斜率为无穷大
                    }
                    else
                    {
                        int g = gcd(abs(dy), abs(dx)); // 化简斜率
                        dy /= g;
                        dx /= g;

                        // 规范斜率方向（确保dx为正数，或者如果dx为0则dy为正数）
                        if (dx < 0)
                        {
                            dy = -dy;
                            dx = -dx;
                        }

                        slopes.insert({dy, dx}); // 存储规范化后的斜率
                    }
                }
            }
        }
    }

    // 输出唯一斜率的数量
    cout << slopes.size() << endl;

    return 0;
}
