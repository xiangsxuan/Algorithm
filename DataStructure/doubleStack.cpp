//��ջ����ռ�doubleStack(��ͬһ�ռ�,����ջ��������)
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

typedef struct
{

}SqDoubleStack;

Status visit(SElemType c)
{
	printf("%d ", c);
	return OK;
}

int main()
{
	//int j;
	//SqDoubleStack s;
	//int e;
	//if (InitStack(&s) == OK)
	//{
	//	for (j = 1; j <= 5; j++)
	//		Push(&s, j, 1);
	//	for (j = MAXSIZE; j >= MAXSIZE - 2; j--)
	//		Push(&s, j, 2);
	//}

	//printf("ջ��Ԫ������Ϊ��");
	//StackTraverse(s);

	//printf("��ǰջ��Ԫ���У�%d \n", StackLength(s));

	//Pop(&s, &e, 2);
	//printf("������ջ��Ԫ�� e=%d\n", e);
	//printf("ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	//for (j = 6; j <= MAXSIZE - 2; j++)
	//	Push(&s, j, 1);

	//printf("ջ��Ԫ������Ϊ��");
	//StackTraverse(s);

	//printf("ջ����%d(1:�� 0:��)\n", Push(&s, 100, 1));


	//ClearStack(&s);
	//printf("���ջ��ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	return 0;
}