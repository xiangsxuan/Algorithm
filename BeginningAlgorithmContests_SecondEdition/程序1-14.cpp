#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=a;a=b;b=t;
	}//ִ�����֮��a<=b����<=,��Ҫ���˵��ڵ������ 
	if(a>c){
		t=a;a=c;c=t;
	}//ִ�����֮��a<=c,��a<=b,Ҳ����ִ������������֮��aΪ��Сֵ��������Ҫ�ŵľ���b��c��λ���� 
	if(b>c){
		t=b;b=c;c=t;
	}
	printf("%d %d %d",a,b,c);
	
	return 0;
} 
