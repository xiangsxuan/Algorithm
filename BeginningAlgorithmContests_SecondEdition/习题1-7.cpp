#include<stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	//错误的：
	if(year%4==0&&year/100!=0||year/400==0){ 
		printf("yes\n");
	}else{
		printf("no\n");
	}
	//400年又闰是在100年不润的基础上的，所以应该加括号
	//正确的： 
	if(year%4==0&&(year/100!=0||year/400==0)){
		//错误的，400年又闰是在100年不润的基础上的，所以应该加括号 
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
} 
