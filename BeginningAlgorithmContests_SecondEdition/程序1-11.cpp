#include<stdio.h>
int main(){
	int m,n,r,c;//m为腿数，总头数为n ，r为兔子数，c为鸡数 
	scanf("%d%d",&n,&m);
	r=(m-2*n)/2;
	c=n-r;
	if(r>=0&&c>=0&&m%2==0)
		//注意：if条件中的是>=,不是>,我一开始写错了，这样就把总数目为1只动物的情况排掉了 
		//算法竞赛的目标是任意输入均可以得到正确答案，而不仅仅是样例，
		//所以写完程序就要考虑尽可能多的情况，检查可行性 
		printf("%d %d",c,r);
	else
		printf("No answer");
	/*第二种写法 
	if(r<0||c<0||m%2==1){
		printf("No answer");
	}else{
		printf("%d %d",c,r);
	}*/
	return 0;
} 
