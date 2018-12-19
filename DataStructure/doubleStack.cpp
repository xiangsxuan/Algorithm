//两栈共享空间doubleStack(即同一空间,两个栈从两端用)
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
//2.数据空间的下标范围是0~MAXSIZE-1   所以空栈标记可以设置为-1,MAXSIZE
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
	s->top2 = MAXSIZE;//不要想当然设置为-1,要考虑下数据是在什么范围的,然后初始应在数据范围之外
	return OK;
}

Status Push(SqDoubleStack *s, SElemType e, int stackNumber) {
	if (s->top1 + 1 == s->top2) {
		return ERROR;
	}
	if (1 == stackNumber) {
		s->data[++(s->top1)] = e;//此处是++s->top1,不是s->top1++
	}
	else if (2 == stackNumber) {
		s->data[--(s->top2)] = e;//这里是--,不是++,不要想当然认为入栈top就增加,也要看我们设定往什么方向增长
	}
	else {
		return ERROR;
	}
	return OK;
}

Status StackTraverse(SqDoubleStack s) {
	printf("\n共享栈1(入栈顺序输出):\n");
	for (int i = 0; i <= s.top1; i++) {
		visit(s.data[i]);
	}
	printf("\n共享栈2(入栈顺序输出):\n");
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
			Push(&s, j, 1);//将元素j入栈1
		for (j = MAXSIZE; j >= MAXSIZE - 2; j--)
			Push(&s, j, 2);//将元素j入栈2
	}

	printf("栈中元素依次为：");
	StackTraverse(s);

	printf("当前栈中元素有：%d \n", StackLength(s));

	Pop(&s, &e, 2);
	printf("弹出的栈顶元素 e=%d\n", e);
	printf("栈空否：%d(1:空 0:否)\n", StackEmpty(s));

	for (j = 6; j <= MAXSIZE - 2; j++)
		Push(&s, j, 1);

	printf("栈中元素依次为：");
	StackTraverse(s);

	printf("栈满否：%d(1:否 0:满)\n", Push(&s, 100, 1));

	ClearStack(&s);
	printf("清空栈后，栈空否：%d(1:空 0:否)\n", StackEmpty(s));

	return 0;
}