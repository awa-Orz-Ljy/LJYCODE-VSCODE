#include<bits/stdc++.h>
using namespace std;
int main(){
	string s = "12345678";
	//举个例子，假设s是字符数组，
	//比如初始是"1234"（假设长度是4的话），那么第一次循环输出1234，
	//然后next_permutation会生成1243，第二次循环输出1243，
	//依此类推，直到4321，然后调用next_permutation返回false，循环结束。
	
	//do while确保第一个排序会被输出
	do{
		for(int i = 0;i < 8;i ++){
			cout<<s[i];
			//最后一个字符不用输出括号来分隔
			if(i != 7) cout<<" ";
		}
		cout<<endl;
	//存在一个字典排序就true，排完了所有排序就是false
	}while(next_permutation(s.begin(),s.end()));
	return 0;
}