#include<stdio.h>
int main(){
	double a=0.0;
	while(a+1>a)a=a*2.0;
	printf("%lf\n",a);
	
	a=0.0;
	while(a>a-1)a=a/2.0;
	printf("%lf\n",a);
	return 0;
}
