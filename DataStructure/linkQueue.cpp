//链队列linkQueue(有头节点)
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.链表删除时, 要知道之前的元素。如果把需要删除的那端放上头节点，就可以一直随时找到删除元素之前的节点了（即头节点）, 所以我们把删除放在头节点端
//2.我的错误点有写备注，详看代码注释
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
typedef int QElemType;

typedef struct QNode	/* 结点结构 */
{
	QElemType data;
	struct QNode *next;
}QNode, *QNodePtr;

typedef struct			/* 队列的链表结构 */
{
	QNodePtr front, rear;
}LinkQueue;

Status visit(QElemType c)
{
	printf("%d ", c);
	return OK;
}

Status InitQueue(LinkQueue *q) {
	QNodePtr headNode = (QNodePtr)malloc(sizeof(QNode));
	if (NULL == headNode) {
		return ERROR;
	}
	headNode->next = NULL;
	q->rear = q->front = headNode;
	return OK;
}

Status QueueEmpty(LinkQueue q) {
	if (q.front == q.rear) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int QueueLength(LinkQueue q) {
	int num = 0;
	QNodePtr travePointer = q.front->next;
	while (travePointer) {
		num++;
		travePointer = travePointer->next;
	}
	return num;
}

Status QueueTraverse(LinkQueue Q)
{
	QNodePtr p;
	p = Q.front->next;
	while (p)
	{
		visit(p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}

Status EnQueue(LinkQueue *q, QElemType e) {
	QNodePtr newNode = (QNodePtr)malloc(sizeof(QNode));
	newNode->data = e;
	newNode->next = NULL;
	q->rear->next = newNode;
	q->rear = newNode;
	return OK;
}

Status GetHead(LinkQueue q, QElemType *d) {
	if (q.front == q.rear) {
		return ERROR;
	}
	*d = q.front->next->data;
	return OK;
}
Status DeQueue(LinkQueue *q, QElemType *d) {
	if (q->front == q->rear) {
		return ERROR;
	}
	*d = q->front->next->data;
	QNodePtr toDelete = q->front->next;
	q->front->next = q->front->next->next;
	free(toDelete);
	return OK;
}

Status ClearQueue(LinkQueue *q) {
	/*链表涉及删除时,一定要把每个节点的内存释放掉,这里我一开始如下的写法造成了内存泄漏
	q.front = q.rear = q.front->next;*/
	QNodePtr travePointer = q->front->next;
	while (travePointer) {
		QNodePtr toDelete = travePointer;
		travePointer = travePointer->next;
		free(toDelete);
	}
	q->rear = q->front;
	q->front->next = NULL;
	return OK;
}

Status DestroyQueue(LinkQueue *q) {
	/*作者的写法如下，有点不知道为什么这样写：
	while(Q->front)
	{
	Q->rear=Q->front->next;
	free(Q->front);
	Q->front=Q->rear;
	}
	*/
	free(q->front);
	q->front = q->rear = NULL;
	return OK;
}

int main()
{
	int i;
	QElemType d;
	LinkQueue q;
	i = InitQueue(&q);
	if (i)
		printf("成功地构造了一个空队列!\n");
	printf("是否空队列？%d(1:空 0:否)  ", QueueEmpty(q));
	printf("队列的长度为%d\n", QueueLength(q));
	EnQueue(&q, -5);
	EnQueue(&q, 5);
	EnQueue(&q, 10);
	printf("插入3个元素(-5,5,10)后,队列的长度为%d\n", QueueLength(q));
	printf("是否空队列？%d(1:空 0:否)  ", QueueEmpty(q));
	printf("队列的元素依次为：");
	QueueTraverse(q);
	i = GetHead(q, &d);
	if (i == OK)
		printf("队头元素是：%d\n", d);
	DeQueue(&q, &d);
	printf("删除了队头元素%d\n", d);
	i = GetHead(q, &d);
	if (i == OK)
		printf("新的队头元素是：%d\n", d);
	ClearQueue(&q);
	printf("清空队列后,q.front=%u q.rear=%u q.front->next=%u\n", q.front, q.rear, q.front->next);
	DestroyQueue(&q);
	printf("销毁队列后,q.front=%u q.rear=%u\n", q.front, q.rear);

	return 0;
}