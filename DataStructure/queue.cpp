//顺序循环队列queue
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
//2.循环队列,无论出队列还是入队列, 操作后都是首位指针变量增加
//3.循环队列,一定要记得 %MAXSIZE
//4.数组的长度, 直接首尾相减即可,并不需要像链表一样遍历,每次都应想一下,不要想当然写代码
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

typedef struct
{
	QElemType data[MAXSIZE];
	int front;
	int rear;
}SqQueue;

Status visit(QElemType c)
{
	printf("%d ", c);
	return OK;
}

Status InitQueue(SqQueue *Q) {
	Q->front = 0;
	Q->rear = 0;
	return OK;
}

Status QueueEmpty(SqQueue Q) {
	if (Q.front == Q.rear) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

Status EnQueue(SqQueue *Q, QElemType e) {
	if ((Q->rear + 1) % MAXSIZE == Q->front) {
		//循环队列,一定要记得 %MAXSIZE
		//此循环队列, 队列满时,仍有一个空位置
		return ERROR;
	}
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;
	return OK;
}

int QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
	/* 我写的太复杂且低效了,这不是链表,是数组,相减直接可以得到长度
	int idx = Q.front;
	while ((idx + 1) % MAXSIZE != Q.rear) {
	idx++;
	}
	return idx;*/
}

Status DeQueue(SqQueue *Q, QElemType *e) {
	if (Q->rear == Q->front) {
		return ERROR;
	}
	*e = Q->data[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return OK;
}

Status QueueTraverse(SqQueue Q) {
	int i;
	i = Q.front;
	while ((i + Q.front) != Q.rear)
	{
		visit(Q.data[i]);
		i = (i + 1) % MAXSIZE;
	}
	printf("\n");
	return OK;
}

Status GetHead(SqQueue Q, QElemType *e) {
	*e = Q.data[Q.front];
	return OK;
}

Status ClearQueue(SqQueue *Q) {
	Q->front = Q->rear = 0;
	return OK;
}

int main()
{
	Status j;
	int i = 0, l;
	QElemType d;
	SqQueue Q;
	InitQueue(&Q);
	printf("初始化队列后，队列空否？%u(1:空 0:否)\n", QueueEmpty(Q));

	printf("请输入整型队列元素(不超过%d个),-1为提前结束符: ", MAXSIZE - 1);
	do
	{
		/* scanf("%d",&d); */
		d = i + 100;
		if (d == -1)
			break;
		i++;
		EnQueue(&Q, d);
	} while (i < MAXSIZE - 1);

	printf("队列长度为: %d\n", QueueLength(Q));
	printf("现在队列空否？%u(1:空 0:否)\n", QueueEmpty(Q));
	printf("连续%d次由队头删除元素,队尾插入元素:\n", MAXSIZE);
	for (l = 1; l <= MAXSIZE; l++)
	{
		DeQueue(&Q, &d);
		printf("删除的元素是%d,插入的元素:%d \n", d, l + 1000);
		/* scanf("%d",&d); */
		d = l + 1000;
		EnQueue(&Q, d);
	}
	l = QueueLength(Q);

	printf("现在队列中的元素为: \n");
	QueueTraverse(Q);
	printf("共向队尾插入了%d个元素\n", i + MAXSIZE);
	if (l - 2 > 0)
		printf("现在由队头删除%d个元素:\n", l - 2);
	while (QueueLength(Q) > 2)
	{
		DeQueue(&Q, &d);
		printf("删除的元素值为%d\n", d);
	}

	j = GetHead(Q, &d);
	if (j)
		printf("现在队头元素为: %d\n", d);
	ClearQueue(&Q);
	printf("清空队列后, 队列空否？%u(1:空 0:否)\n", QueueEmpty(Q));

	return 0;
}