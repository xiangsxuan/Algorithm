//链栈linkStack
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
//2.要注意区分LinkStack,LinkStackPtr
//3.链表节点一定是要一个一个释放的,不要忘了
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
	SElemType data;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef struct
{
	LinkStackPtr top;
	int count;
}LinkStack;

Status visit(SElemType c)
{
	printf("%d ", c);
	return OK;
}

Status InitStack(LinkStack *s) {//只有头结点,没有元素节点
	s->top = (LinkStackPtr)malloc(sizeof(StackNode));//这句话是参考作者代码,作用是:试一下还有没有空间?  是吗?
	if (!s->top) {
		return ERROR;
	}
	s->top = NULL;
	s->count = 0;
	return OK;
}

Status Push(LinkStack *s, SElemType e) {
	/* 在想啥...不需要判断空间的啊....链表的优势就是不用考虑空间啊....
	if (MAXSIZE - 1 == s->count) {
		return ERROR;
	} */
	LinkStackPtr newNode = (LinkStackPtr)malloc(sizeof(StackNode));
	newNode->data = e;
	newNode->next = s->top;
	s->top = newNode;
	s->count++;
	return OK;
}

Status StackTraverse(LinkStack s) {
	LinkStackPtr nodeTrave = s.top;
	while (nodeTrave) {
		visit(nodeTrave->data);
		nodeTrave = nodeTrave->next;
	}
	printf("\n");
	return OK;
}

Status Pop(LinkStack *s, SElemType *e) {
	if (0 == s->count) {//写StackEmpty(*S)更好
		return ERROR;
	}
	LinkStackPtr popNodePtr = s->top;
	*e = popNodePtr->data;
	LinkStackPtr aftPopNode = popNodePtr->next;
	s->top = aftPopNode;//这里一开始错写成了aftPopNode->next,如果画个图,按照图来写,应该就不会错了吧
	free(popNodePtr);
	s->count--;
	return OK;
}

Status StackEmpty(LinkStack s) {
	if (s.count == 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

Status GetTop(LinkStack s, SElemType *e) {
	if (0 == s.count && NULL == s.top) {
		return ERROR;
	}
	*e = s.top->data;
	return OK;
}

int StackLength(LinkStack s) {
	return s.count;
}

Status ClearStack(LinkStack *s) {
	/* 一开始就简单写成了如下,这样节点空间是没释放掉的
	s->count = 0;
	s->top = NULL; */
	LinkStackPtr traveNode = s->top;
	LinkStackPtr toDelete = traveNode;
	while (traveNode) {
		toDelete = traveNode;
		traveNode = traveNode->next;
		free(toDelete);
	}
	s->count = 0;
	return OK;
}

int main()
{
	int j;
	LinkStack s;
	int e;
	if (InitStack(&s) == OK) {
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
	}

	return 0;
}