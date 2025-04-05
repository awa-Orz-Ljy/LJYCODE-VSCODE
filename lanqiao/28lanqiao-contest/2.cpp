#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,c;cin>>a>>b>>c;
    if(a + b < c || a + c < b || b + c < a){
        if(a + b < c) cout<<'b';
        if(a + c < b) cout<<'q';
        if(b + c < a) cout<<'l';
    }
    else cout<<-1;
    return 0;
}