#include<stdio.h>
#include<math.h>

const double PI=2*acos(0);//һ��ʼ��д��int�����ˣ����� 

int main(){
	int a;
	scanf("%d",&a);
	
	//�ҵĴ���𰸣� 
	//printf("%.3lf %.3lf\n",sin(a),cos(a));
	//���Ǻ����еĲ����ǻ��ȣ����ǽǶ�
	
	//����ѵ���ȷ�𰸣�
	printf("%.3lf %.3lf\n",sin(a/180.0*PI),cos(a*PI/180.0)); 
	return 0;
} 

