#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int mex(const vector<int>& arr) {
    set<int> s(arr.begin(), arr.end());
    int i = 0;
    while (s.count(i)) {
        i++;
    }
    return i;
}

int solve(vector<int> arr) {
    int steps = 0;
    vector<int> prearr = arr;
    while (true) {
        int m = mex(arr);
        for (int& num : arr) {
            num = max(0, num - m);
        }
        steps++;
        // 检查数组元素是否都相同
        bool same = true;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] != arr[0]) {
                same = false;
                break;
            }
        }
        if (same) return steps;
        
        if (arr == prearr) return -1;

        prearr = arr;
    }
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    cout<<solve(arr) <<endl;
    return 0;
}