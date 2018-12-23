//������linkQueue(��ͷ�ڵ�)
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.����ɾ��ʱ, Ҫ֪��֮ǰ��Ԫ�ء��������Ҫɾ�����Ƕ˷���ͷ�ڵ㣬�Ϳ���һֱ��ʱ�ҵ�ɾ��Ԫ��֮ǰ�Ľڵ��ˣ���ͷ�ڵ㣩, �������ǰ�ɾ������ͷ�ڵ��
//2.�ҵĴ������д��ע���꿴����ע��
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

typedef struct QNode	/* ���ṹ */
{
	QElemType data;
	struct QNode *next;
}QNode, *QNodePtr;

typedef struct			/* ���е�����ṹ */
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
	/*�����漰ɾ��ʱ,һ��Ҫ��ÿ���ڵ���ڴ��ͷŵ�,������һ��ʼ���µ�д��������ڴ�й©
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
	/*���ߵ�д�����£��е㲻֪��Ϊʲô����д��
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
		printf("�ɹ��ع�����һ���ն���!\n");
	printf("�Ƿ�ն��У�%d(1:�� 0:��)  ", QueueEmpty(q));
	printf("���еĳ���Ϊ%d\n", QueueLength(q));
	EnQueue(&q, -5);
	EnQueue(&q, 5);
	EnQueue(&q, 10);
	printf("����3��Ԫ��(-5,5,10)��,���еĳ���Ϊ%d\n", QueueLength(q));
	printf("�Ƿ�ն��У�%d(1:�� 0:��)  ", QueueEmpty(q));
	printf("���е�Ԫ������Ϊ��");
	QueueTraverse(q);
	i = GetHead(q, &d);
	if (i == OK)
		printf("��ͷԪ���ǣ�%d\n", d);
	DeQueue(&q, &d);
	printf("ɾ���˶�ͷԪ��%d\n", d);
	i = GetHead(q, &d);
	if (i == OK)
		printf("�µĶ�ͷԪ���ǣ�%d\n", d);
	ClearQueue(&q);
	printf("��ն��к�,q.front=%u q.rear=%u q.front->next=%u\n", q.front, q.rear, q.front->next);
	DestroyQueue(&q);
	printf("���ٶ��к�,q.front=%u q.rear=%u\n", q.front, q.rear);

	return 0;
}