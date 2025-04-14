#include<bits/stdc++.h>
using namespace std;
const double pi = 3.14;
int main(){
    int h,r;cin>>h>>r;
    double v = pi*r*r*h;
    int ans = ceil(20000/v);
    cout<<ans;
}