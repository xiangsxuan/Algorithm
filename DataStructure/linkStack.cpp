//��ջlinkStack
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.�ҵĴ������д��ע���꿴����ע��
#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 

typedef int Status;
typedef int SElemType;

typedef struct StackNode
{

}StackNode, *LinkStackPtr;

typedef struct
{

}LinkStack;

Status visit(SElemType c)
{
	printf("%d ", c);
	return OK;
}

int main()
{
	//int j;
	//LinkStack s;
	//int e;
	//if (InitStack(&s) == OK)
	//	for (j = 1; j <= 10; j++)
	//		Push(&s, j);
	//printf("ջ��Ԫ������Ϊ��");
	//StackTraverse(s);
	//Pop(&s, &e);
	//printf("������ջ��Ԫ�� e=%d\n", e);
	//printf("ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));
	//GetTop(s, &e);
	//printf("ջ��Ԫ�� e=%d ջ�ĳ���Ϊ%d\n", e, StackLength(s));
	//ClearStack(&s);
	//printf("���ջ��ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));
	return 0;
}