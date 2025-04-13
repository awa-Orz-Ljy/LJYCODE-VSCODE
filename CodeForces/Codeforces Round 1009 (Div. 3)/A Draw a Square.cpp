#include <iostream>
using namespace std;

// 判断四个点能否构成正方形
bool Square(int l, int r, int d, int u) {
    // 计算相邻两点之间距离的平方
    int dist1 = l * l + u * u;
    int dist2 = r * r + u * u;
    int dist3 = r * r + d * d;
    int dist4 = l * l + d * d;
    // 判断四条边的长度是否相等
    return dist1 == dist2 && dist2 == dist3 && dist3 == dist4;
}

int main(){
    int t;cin>>t;
    for (int i = 0;i < t;++i){
        int l, r, d, u;cin >> l >> r >> d >> u;
        if (Square(l, r, d, u))cout << "Yes" << endl;
     	else cout << "No" << endl;
    }
    return 0;
}