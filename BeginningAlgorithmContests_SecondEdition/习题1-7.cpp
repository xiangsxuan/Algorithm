#include<stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	//����ģ�
	if(year%4==0&&year/100!=0||year/400==0){ 
		printf("yes\n");
	}else{
		printf("no\n");
	}
	//400����������100�겻��Ļ����ϵģ�����Ӧ�ü�����
	//��ȷ�ģ� 
	if(year%4==0&&(year/100!=0||year/400==0)){
		//����ģ�400����������100�겻��Ļ����ϵģ�����Ӧ�ü����� 
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
} 
