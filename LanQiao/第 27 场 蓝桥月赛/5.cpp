#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;



// 检查一个组合是否合法
bool isValid(const vector<int>& countries,int state,int D){
    int n = countries.size();
    vector<int> count(1e9 + 1, 0);  // 记录每个国家被监控的电脑数量
    vector<int> pos(1e9 + 1, -1);  // 记录每个国家最后一台被监控电脑的位置

    for (int i = 0; i < n; ++i) {
        if ((state >> i) & 1) {  // 第 i 台电脑被监控
            int country = countries[i];
            count[country]++;
            if (count[country] > 2) return false;
            if (count[country] == 2 && abs(i - pos[country]) > D) return false;
            pos[country] = i;
        }
    }
    return true;
}

int main() {
    int N,D;
    cin >> N >> D;
	vector<int> countries(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> countries[i];
    }

    int totalWays = 0;
    // 枚举所有可能的组合，排除不监控任何电脑的情况
    for (int state = 1; state < (1 << N); ++state) {
        if (isValid(countries, state, D)) {
            totalWays = (totalWays + 1) % mod;
        }
    }
    cout<<totalWays<<endl;
    return 0;
}    