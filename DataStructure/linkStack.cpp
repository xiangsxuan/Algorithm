//��ջlinkStack
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.�ҵĴ������д��ע���꿴����ע��
//2.Ҫע������LinkStack,LinkStackPtr
//3.����ڵ�һ����Ҫһ��һ���ͷŵ�,��Ҫ����
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

Status InitStack(LinkStack *s) {//ֻ��ͷ���,û��Ԫ�ؽڵ�
	s->top = (LinkStackPtr)malloc(sizeof(StackNode));//��仰�ǲο����ߴ���,������:��һ�»���û�пռ�?  ����?
	if (!s->top) {
		return ERROR;
	}
	s->top = NULL;
	s->count = 0;
	return OK;
}

Status Push(LinkStack *s, SElemType e) {
	/* ����ɶ...����Ҫ�жϿռ�İ�....��������ƾ��ǲ��ÿ��ǿռ䰡....
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
	if (0 == s->count) {//дStackEmpty(*S)����
		return ERROR;
	}
	LinkStackPtr popNodePtr = s->top;
	*e = popNodePtr->data;
	LinkStackPtr aftPopNode = popNodePtr->next;
	s->top = aftPopNode;//����һ��ʼ��д����aftPopNode->next,�������ͼ,����ͼ��д,Ӧ�þͲ�����˰�
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
	/* һ��ʼ�ͼ�д��������,�����ڵ�ռ���û�ͷŵ���
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
		printf("ջ��Ԫ������Ϊ��");
		StackTraverse(s);
		Pop(&s, &e);
		printf("������ջ��Ԫ�� e=%d\n", e);
		printf("ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));
		GetTop(s, &e);
		printf("ջ��Ԫ�� e=%d ջ�ĳ���Ϊ%d\n", e, StackLength(s));
		ClearStack(&s);
		printf("���ջ��ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));
	}

	return 0;
}