#include<stdio.h>
#include<math.h>

const double PI=2*acos(0);//一开始误写成int类型了！！！ 

int main(){
	int a;
	scanf("%d",&a);
	
	//我的错误答案： 
	//printf("%.3lf %.3lf\n",sin(a),cos(a));
	//三角函数中的参数是弧度，不是角度
	
	//刘汝佳的正确答案：
	printf("%.3lf %.3lf\n",sin(a/180.0*PI),cos(a*PI/180.0)); 
	return 0;
} 

