#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
    if(num < 2)return false;
    for(int i = 2;i * i <= num;i ++){
        if(num % i == 0)return false;
    }
    return true;
}
bool ismiuling(int num){
    for(int m = 2;m * m <= num;m ++){
        if(num % (m * m) == 0)return true;
    }
    return false;
}

int main(){
	int n;cin>>n;
	int count = 0,diff = n;
	for(int i = 2;i < n;i ++){
		int j = n - i;
		if(isprime(i)&&ismiuling(j)){
			count ++;
			diff = min(diff,abs(i - j));
		}

	}
	cout<<count<<endl<<diff<<endl;
	return 0;
}