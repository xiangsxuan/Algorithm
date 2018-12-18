//˳��ջstack
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
	SElemType data[MAXSIZE];
	int top;
}SqStack;

Status visit(SElemType c) {
	printf("%d ", c);
	return OK;
}

Status InitStack(SqStack *s) {
	s->top = -1;
	return OK;
}

Status Push(SqStack *s, SElemType e) {
	if (s->top == MAXSIZE - 1) {
		return ERROR;
	}
	//һ��ʼ���������仰д����
	s->top++;
	s->data[s->top] = e;
	return OK;
}

Status StackTraverse(SqStack s) {
	int idx = 0;
	while (idx != s.top) {
		visit(s.data[idx++]);
	}
	printf("\n");
	return OK;
}

Status Pop(SqStack *s, SElemType *e) {
	if (-1 == s->top) {//һ��Ҫ�������ж��� ����ɽ��в�����
		return ERROR;
	}
	*e = s->data[s->top];
	s->top--;
	return OK;
}

Status GetTop(SqStack s, SElemType *e) {
	if (-1 == s.top) {
		return ERROR;
	}
	*e = s.data[s.top];
	return OK;
}

int StackLength(SqStack s) {
	return s.top + 1;
}

Status ClearStack(SqStack *s) {
	s->top = -1;
	return OK;
}

Status StackEmpty(SqStack S)
{
	if (S.top == -1)
		return TRUE;
	else
		return FALSE;
}

int main()
{
	int j;
	SqStack s;
	int e;
	if (InitStack(&s) == OK)
		for (j = 1; j <= 10; j++)
			Push(&s, j);
	printf("ջ��Ԫ������Ϊ��");
	StackTraverse(s);
	Pop(&s, &e);
	printf("������ջ��Ԫ�� e=%d\n", e);
	printf("ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));
	GetTop(s, &e);
	printf("ջ��Ԫ�� e=%d ջ�ĳ���Ϊ%d\n", e, StackLength(s));
	ClearStack(&s);
	printf("���ջ��ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	return 0;
}