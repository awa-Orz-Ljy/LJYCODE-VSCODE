#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5;



int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int T;cin>>T;
	while(T --){
		int n;cin>>n;
		string s;cin>>s;
		int Min = n;
		stack<char> st;
		for(char c: s){
			if(!st.empty()&&st.top() == c)st.pop();
			else st.push(c);
		}
		int c = st.size()/2;
		Min = min(Min,c);
		c = 0;
		for (int i = 0; i < n; ++i) {
            if (i % 2 == 0 && s[i] != '0') {
                ++c;
            } else if (i % 2 == 1 && s[i] == '0') {
                ++c;
            }
        }
        Min = std::min(Min, c);

        c = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0 && s[i] != '1') {
                ++c;
            } else if (i % 2 == 1 && s[i] == '1') {
                ++c;
            }
        }
        Min = std::min(Min, c);

        std::cout << Min << std::endl;
    }
	
	return 0;
}