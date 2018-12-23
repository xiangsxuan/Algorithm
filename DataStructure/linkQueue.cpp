//链队列linkQueue
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
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

}QNode, *QueuePtr;

typedef struct			/* 队列的链表结构 */
{

}LinkQueue;

Status visit(QElemType c)
{
	printf("%d ", c);
	return OK;
}

int main()
{
	//int i;
	//QElemType d;
	//LinkQueue q;
	//i = InitQueue(&q);
	//if (i)
	//	printf("成功地构造了一个空队列!\n");
	//printf("是否空队列？%d(1:空 0:否)  ", QueueEmpty(q));
	//printf("队列的长度为%d\n", QueueLength(q));
	//EnQueue(&q, -5);
	//EnQueue(&q, 5);
	//EnQueue(&q, 10);
	//printf("插入3个元素(-5,5,10)后,队列的长度为%d\n", QueueLength(q));
	//printf("是否空队列？%d(1:空 0:否)  ", QueueEmpty(q));
	//printf("队列的元素依次为：");
	//QueueTraverse(q);
	//i = GetHead(q, &d);
	//if (i == OK)
	//	printf("队头元素是：%d\n", d);
	//DeQueue(&q, &d);
	//printf("删除了队头元素%d\n", d);
	//i = GetHead(q, &d);
	//if (i == OK)
	//	printf("新的队头元素是：%d\n", d);
	//ClearQueue(&q);
	//printf("清空队列后,q.front=%u q.rear=%u q.front->next=%u\n", q.front, q.rear, q.front->next);
	//DestroyQueue(&q);
	//printf("销毁队列后,q.front=%u q.rear=%u\n", q.front, q.rear);

	return 0;
}
