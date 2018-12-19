//��ջ����ռ�doubleStack(��ͬһ�ռ�,����ջ��������)
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.�ҵĴ������д��ע���꿴����ע��
//2.���ݿռ���±귶Χ��0~MAXSIZE-1   ���Կ�ջ��ǿ�������Ϊ-1,MAXSIZE
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
	SElemType data[MAXSIZE];
	int top1;
	int top2;
}SqDoubleStack;

Status visit(SElemType c)
{
	printf("%d ", c);
	return OK;
}

Status InitStack(SqDoubleStack *s) {
	s->top1 = -1;
	s->top2 = MAXSIZE;//��Ҫ�뵱Ȼ����Ϊ-1,Ҫ��������������ʲô��Χ��,Ȼ���ʼӦ�����ݷ�Χ֮��
	return OK;
}

Status Push(SqDoubleStack *s, SElemType e, int stackNumber) {
	if (s->top1 + 1 == s->top2) {
		return ERROR;
	}
	if (1 == stackNumber) {
		s->data[++(s->top1)] = e;//�˴���++s->top1,����s->top1++
	}
	else if (2 == stackNumber) {
		s->data[--(s->top2)] = e;//������--,����++,��Ҫ�뵱Ȼ��Ϊ��ջtop������,ҲҪ�������趨��ʲô��������
	}
	else {
		return ERROR;
	}
	return OK;
}

Status StackTraverse(SqDoubleStack s) {
	printf("\n����ջ1(��ջ˳�����):\n");
	for (int i = 0; i <= s.top1; i++) {
		visit(s.data[i]);
	}
	printf("\n����ջ2(��ջ˳�����):\n");
	for (int i = MAXSIZE - 1; i >= s.top2; i--) {
		visit(s.data[i]);
	}
	printf("\n");
	return OK;
}

int StackLength(SqDoubleStack s) {
	return (s.top1 + 1) + (MAXSIZE - s.top2);
}

Status Pop(SqDoubleStack *s, SElemType *e, int stackNumber) {
	if (1 == stackNumber) {
		if (-1 == s->top1) {
			return ERROR;
		}
		*e = s->data[(s->top1)--];
	}
	else if (2 == stackNumber) {
		if (MAXSIZE == s->top2) {
			return ERROR;
		}
		*e = s->data[(s->top2)++];
	}
	return OK;
}

Status StackEmpty(SqDoubleStack s) {
	if (-1 == s.top1 &&  MAXSIZE == s.top2) {
		return TRUE;
	}
	return FALSE;
}

Status ClearStack(SqDoubleStack *s) {
	s->top1 = -1;
	s->top2 = MAXSIZE;
	return OK;
}

int main()
{
	int j;
	SqDoubleStack s;
	int e;
	if (InitStack(&s) == OK)
	{
		for (j = 1; j <= 5; j++)
			Push(&s, j, 1);//��Ԫ��j��ջ1
		for (j = MAXSIZE; j >= MAXSIZE - 2; j--)
			Push(&s, j, 2);//��Ԫ��j��ջ2
	}

	printf("ջ��Ԫ������Ϊ��");
	StackTraverse(s);

	printf("��ǰջ��Ԫ���У�%d \n", StackLength(s));

	Pop(&s, &e, 2);
	printf("������ջ��Ԫ�� e=%d\n", e);
	printf("ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	for (j = 6; j <= MAXSIZE - 2; j++)
		Push(&s, j, 1);

	printf("ջ��Ԫ������Ϊ��");
	StackTraverse(s);

	printf("ջ����%d(1:�� 0:��)\n", Push(&s, 100, 1));

	ClearStack(&s);
	printf("���ջ��ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	return 0;
}