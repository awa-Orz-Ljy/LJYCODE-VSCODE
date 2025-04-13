#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int q;cin >> q;
    unordered_set<int> set;
    bool is_possible = true;

    for (int _ = 0; _ < q; ++_) {
        int k_i;
        cin >> k_i;
        vector<int> arr(k_i);
        for (int i = 0; i < k_i; ++i) {
            cin >> arr[i];
        }

        // 检查数组是否严格递增
        for (int i = 1; i < k_i; ++i) {
            if (arr[i] <= arr[i-1]) {
                is_possible = false;
            }
        }

        // 收集所有元素到集合中
        for (int num : arr) {
            set.insert(num);
        }
    }

    if (!is_possible) {
        cout << "No" << endl;
        return 0;
    }

    if (set.empty()) {
        cout << "Yes" << endl;
        return 0;
    }

    // 计算最小值和最大值
    int min1 = *set.begin();
    int max1 = *set.begin();
    for (int num : set) {
        if (num < min1) {
            min1 = num;
        }
        if (num > max1) {
            max1 = num;
        }
    }

    if (max1 - min1 + 1 == set.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}