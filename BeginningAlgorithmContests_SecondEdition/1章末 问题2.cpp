#include<stdio.h>

int main(){
	double a=0.0;
	int i=0;
	while(i<1000){
		i++;
		printf(" ",i);
	}
	printf("1000\n");
	printf("%.1000lf",a);
	return 0;
} 

