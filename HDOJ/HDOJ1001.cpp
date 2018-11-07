//注意题目中的数据范围,如果用int存储,那么int*int就超出这个范围了 
//吐槽题目:按照题目的输出格式,最后一行应没有多余空行,但它的答案却多出一个空行 
#include<cstdio>
int main() {
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long n;
	//int newLine=0;
	while(scanf("%lld",&n)==1) {
		//if(newLine++)printf("\n");
		printf("%lld\n\n",n*(n+1)/2);
	}
	return 0;
}
