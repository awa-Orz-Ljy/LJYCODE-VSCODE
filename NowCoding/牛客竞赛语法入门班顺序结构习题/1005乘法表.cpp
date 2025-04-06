#include<bits/stdc++.h>
using namespace std;
int main(){//i和j其中有一个用来限制另外一个的增长最大值，此处是i限制j,i作为行里的最大值
	for(int i = 1;i <= 9;++ i){
		for(int j = 1;j <= i;++ j){//前面两层循环就这样写，并且输出可以换位置，看需求
			if(j*i > 9)printf("%d*%d=%d ",j,i,j*i);
			else printf("%d*%d= %d ",j,i,j*i);
		}
		printf("\n");//第二个循环结束，即走完了一行，需要换行
	}
	return 0;
}