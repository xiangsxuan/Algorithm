//�ַ���String
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.�ҵĴ������д��ע���꿴����ע��
#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 40

typedef int Status;
typedef int ElemType;	

typedef char String[MAXSIZE+1]; /*  0�ŵ�Ԫ��Ŵ��ĳ��� */

/* ����һ����ֵ����chars�Ĵ�T */
Status StrAssign(String T,char *chars)
{ 
	
}

/* �ɴ�S���Ƶô�T */
Status StrCopy(String T,String S)
{ 
	
}

/* ��SΪ�մ�,�򷵻�TRUE,���򷵻�FALSE */
Status StrEmpty(String S)
{ 
	
}

/*  ��ʼ����: ��S��T���� */
/*  �������: ��S>T,�򷵻�ֵ>0;��S=T,�򷵻�ֵ=0;��S<T,�򷵻�ֵ<0 */
int StrCompare(String S,String T)
{ 
	
}

/* ���ش���Ԫ�ظ��� */
int StrLength(String S)
{ 
	
}

/* ��ʼ����:��S���ڡ��������:��S��Ϊ�մ� */
Status ClearString(String S)
{ 
	
}

/* ��T����S1��S2���Ӷ��ɵ��´�����δ�ضϣ��򷵻�TRUE������FALSE */
Status Concat(String T,String S1,String S2)
{
	
}

/* ��Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ��� */
Status SubString(String Sub,String S,int pos,int len)
{
	
}

/* �����Ӵ�T������S�е�pos���ַ�֮���λ�á���������,��������ֵΪ0�� */
/* ����,T�ǿ�,1��pos��StrLength(S)�� */
int Index(String S, String T, int pos) 
{
	
}

/*  TΪ�ǿմ���������S�е�pos���ַ�֮�������T��ȵ��Ӵ��� */
/*  �򷵻ص�һ���������Ӵ���S�е�λ�ã����򷵻�0 */
int Index2(String S, String T, int pos) 
{
	
}


/*  ��ʼ����: ��S��T����,1��pos��StrLength(S)+1 */
/*  �������: �ڴ�S�ĵ�pos���ַ�֮ǰ���봮T����ȫ���뷵��TRUE,���ֲ��뷵��FALSE */
Status StrInsert(String S,int pos,String T)
{ 
	
}

/*  ��ʼ����: ��S����,1��pos��StrLength(S)-len+1 */
/*  �������: �Ӵ�S��ɾ����pos���ַ��𳤶�Ϊlen���Ӵ� */
Status StrDelete(String S,int pos,int len)
{ 
	
}

/*  ��ʼ����: ��S,T��V����,T�Ƿǿմ����˺����봮�Ĵ洢�ṹ�޹أ� */
/*  �������: ��V�滻����S�г��ֵ�������T��ȵĲ��ص����Ӵ� */
Status Replace(String S,String T,String V)
{ 
	
}

/*  ����ַ���T */
void StrPrint(String T)
{ 
	
}

int main()
{
	//int i,j;
	//Status k;
	//char s;
	//String t,s1,s2;
	//printf("�����봮s1: ");
	//
	//k=StrAssign(s1,"abcd");
	//if(!k)
	//{
	//	printf("��������MAXSIZE(=%d)\n",MAXSIZE);
	//	exit(0);
	//}
	//printf("����Ϊ%d ���շ�%d(1:�� 0:��)\n",StrLength(s1),StrEmpty(s1));
	//StrCopy(s2,s1);
	//printf("����s1���ɵĴ�Ϊ: ");
	//StrPrint(s2);
	//printf("�����봮s2: ");
	//
	//k=StrAssign(s2,"efghijk");
	//if(!k)
	//{
	//	printf("��������MAXSIZE(%d)\n",MAXSIZE);
	//	exit(0);
	//}
	//i=StrCompare(s1,s2);
	//if(i<0)
	//	s='<';
	//else if(i==0)
	//	s='=';
	//else
	//	s='>';
	//printf("��s1%c��s2\n",s);
	//k=Concat(t,s1,s2);
	//printf("��s1���Ӵ�s2�õ��Ĵ�tΪ: ");
	//StrPrint(t);
	//if(k==FALSE)
	//	printf("��t�нض�\n");
	//ClearString(s1);
	//printf("��Ϊ�մ���,��s1Ϊ: ");
	//StrPrint(s1);
	//printf("����Ϊ%d ���շ�%d(1:�� 0:��)\n",StrLength(s1),StrEmpty(s1));
	//printf("��t���Ӵ�,�������Ӵ�����ʼλ��,�Ӵ�����: ");

	//i=2;
	//j=3;
	//printf("%d,%d \n",i,j);

	//k=SubString(s2,t,i,j);
	//if(k)
	//{
	//	printf("�Ӵ�s2Ϊ: ");
	//	StrPrint(s2);
	//}
	//printf("�Ӵ�t�ĵ�pos���ַ���,ɾ��len���ַ���������pos,len: ");
	//
	//i=4;
	//j=2;
	//printf("%d,%d \n",i,j);


	//StrDelete(t,i,j);
	//printf("ɾ����Ĵ�tΪ: ");
	//StrPrint(t);
	//i=StrLength(s2)/2;
	//StrInsert(s2,i,t);
	//printf("�ڴ�s2�ĵ�%d���ַ�֮ǰ���봮t��,��s2Ϊ:\n",i);
	//StrPrint(s2);
	//i=Index(s2,t,1);
	//printf("s2�ĵ�%d����ĸ���t��һ��ƥ��\n",i);
	//SubString(t,s2,1,1);
	//printf("��tΪ��");
	//StrPrint(t);
	//Concat(s1,t,t);
	//printf("��s1Ϊ��");
	//StrPrint(s1);
	//Replace(s2,t,s1);
	//printf("�ô�s1ȡ����s2�кʹ�t��ͬ�Ĳ��ص��Ĵ���,��s2Ϊ: ");
	//StrPrint(s2);

	return 0;
}