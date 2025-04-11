#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;

char mp[N][N];
void moveright(int &x, int &y)
{
    int nx = x, ny = y + 1;
    if (mp[nx][ny] == '.')
    {
        swap(mp[x][y], mp[nx][ny]);
        y = ny;
    }
    else if (mp[nx][ny] == 'B')
    {
        int bx = nx, by = ny + 1;
        if (mp[bx][by] == '.' || mp[bx][by] == 'T')
        {
            // 推箱子
            mp[bx][by] = 'B';
            mp[nx][ny] = 'P';
            mp[x][y] = '.';
            x = nx;
            y = ny;
        }
    }
}
void moveleft(int &x, int &y)
{
    int nx = x, ny = y - 1;
    if (mp[nx][ny] == '.')
    {
        swap(mp[x][y], mp[nx][ny]);
        y = ny;
    }
    else if (mp[nx][ny] == 'B')
    {
        int bx = nx, by = ny - 1;
        if (mp[bx][by] == '.' || mp[bx][by] == 'T')
        {
            // 推箱子
            mp[bx][by] = 'B';
            mp[nx][ny] = 'P';
            mp[x][y] = '.';
            x = nx;
            y = ny;
        }
    }
}
void moveup(int &x, int &y)
{
    int nx = x - 1, ny = y;
    if (mp[nx][ny] == '.')
    {
        swap(mp[x][y], mp[nx][ny]);
        x = nx;
    }
    else if (mp[nx][ny] == 'B')
    {
        int bx = nx - 1, by = ny;
        if (mp[bx][by] == '.' || mp[bx][by] == 'T')
        {
            mp[bx][by] = 'B';
            mp[nx][ny] = 'P';
            mp[x][y] = '.';
            x = nx;
        }
    }
}

void movedown(int &x, int &y)
{
    int nx = x + 1, ny = y;
    if (mp[nx][ny] == '.')
    {
        swap(mp[x][y], mp[nx][ny]);
        x = nx;
    }
    else if (mp[nx][ny] == 'B')
    {
        int bx = nx + 1, by = ny;
        if (mp[bx][by] == '.' || mp[bx][by] == 'T')
        {
            mp[bx][by] = 'B';
            mp[nx][ny] = 'P';
            mp[x][y] = '.';
            x = nx;
        }
    }
}
bool checkwin()
{
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            if (mp[i][j] == 'T')
                return false; // 还有目标没放箱子
    return true;
}

int main()
{
    int px, py;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] == 'P')
            {
                px = i;
                py = j;
            }
        }
    }
    string op;
    cin >> op;
    for (char c : op)
    {
        if (c == 'R')
            moveright(px, py);
        else if (c == 'L')
            moveleft(px, py);
        else if (c == 'U')
            moveup(px, py);
        else if (c == 'D')
            movedown(px, py);
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << mp[i][j];
        }
        cout << '\n';
    }
    if (checkwin())
    {
        cout << "win~";
    }
    else
    {
        cout << "lose~";
    }
    return 0;
}