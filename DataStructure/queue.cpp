//顺序循环队列queue
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

Status QueueEmpty(SqQueue *Q) {
	if (Q->front == Q->rear) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
int main()
{
	Status j;
	int i = 0, l;
	QElemType d;
	SqQueue Q;
	InitQueue(&Q);
	//printf("初始化队列后，队列空否？%u(1:空 0:否)\n",QueueEmpty(Q));

	//printf("请输入整型队列元素(不超过%d个),-1为提前结束符: ",MAXSIZE-1);
	//do
	//{
	//	/* scanf("%d",&d); */
	//	d=i+100;
	//	if(d==-1)
	//		break;
	//	i++;
	//	EnQueue(&Q,d);
	//}while(i<MAXSIZE-1);

	//printf("队列长度为: %d\n",QueueLength(Q));
	//printf("现在队列空否？%u(1:空 0:否)\n",QueueEmpty(Q));
	//printf("连续%d次由队头删除元素,队尾插入元素:\n",MAXSIZE);
	//for(l=1;l<=MAXSIZE;l++)
	//{
	//	DeQueue(&Q,&d);
	//	printf("删除的元素是%d,插入的元素:%d \n",d,l+1000);
	//	/* scanf("%d",&d); */
	//	d=l+1000;
	//	EnQueue(&Q,d);
	//}
	//l=QueueLength(Q);

	//printf("现在队列中的元素为: \n");
	//QueueTraverse(Q);
	//printf("共向队尾插入了%d个元素\n",i+MAXSIZE);
	//if(l-2>0)
	//	printf("现在由队头删除%d个元素:\n",l-2);
	//while(QueueLength(Q)>2)
	//{
	//	DeQueue(&Q,&d);
	//	printf("删除的元素值为%d\n",d);
	//}

	//j=GetHead(Q,&d);
	//if(j)
	//	printf("现在队头元素为: %d\n",d);
	//ClearQueue(&Q);
	//printf("清空队列后, 队列空否？%u(1:空 0:否)\n",QueueEmpty(Q));

	return 0;
}

