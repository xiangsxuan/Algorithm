//顺序栈stack
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
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
	//一开始把下面两句话写反了
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
	if (-1 == s->top) {//一定要有条件判断下 后面可进行操作否
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
	printf("栈中元素依次为：");
	StackTraverse(s);
	Pop(&s, &e);
	printf("弹出的栈顶元素 e=%d\n", e);
	printf("栈空否：%d(1:空 0:否)\n", StackEmpty(s));
	GetTop(s, &e);
	printf("栈顶元素 e=%d 栈的长度为%d\n", e, StackLength(s));
	ClearStack(&s);
	printf("清空栈后，栈空否：%d(1:空 0:否)\n", StackEmpty(s));

	return 0;
}