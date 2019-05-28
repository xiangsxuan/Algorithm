#include<stdio.h>
int main(){
	int a=0;
	while(a+1>a)a++;
	printf("%d\n",a);
	
	a=0;
	while(a>a-1)a--;
	printf("%d\n",a);
	return 0;
}
