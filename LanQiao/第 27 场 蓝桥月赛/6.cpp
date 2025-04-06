#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool can(const vector<int>& A, const vector<int>& B, int T, int wtime) {
    int days = 1;
    int time = 0;
    int n = A.size();
    for (int i = 0; i < n; ++i) {
        if (time + A[i] > wtime) {
            days ++;
            time = A[i];
        }else time += A[i];
        //等待
        if(i < n - 1) time += B[i];
    }

    return days <= T;
}

int main() {
    int N,T;cin>>N>>T;
    vector<int> A(N);
    vector<int> B(N);
    int maxt = 0;
    for(int i = 0;i < N;i ++){
        cin>>A[i];
        maxt = max(maxt,A[i]);
    }
    for(int i = 0;i < N;i ++) cin>>B[i];
    
    int left = maxt, right = 3600;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (can(A, B, T, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << result << endl;

    return 0;
}    