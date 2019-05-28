#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=a;a=b;b=t;
	}//执行完毕之后a<=b（是<=,不要忘了等于的情况） 
	if(a>c){
		t=a;a=c;c=t;
	}//执行完毕之后a<=c,且a<=b,也就是执行了上面两布之后，a为最小值，接下来要排的就是b，c的位置了 
	if(b>c){
		t=b;b=c;c=t;
	}
	printf("%d %d %d",a,b,c);
	
	return 0;
} 
