//˳��ѭ������queue
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
	//printf("��ʼ�����к󣬶��пշ�%u(1:�� 0:��)\n",QueueEmpty(Q));

	//printf("���������Ͷ���Ԫ��(������%d��),-1Ϊ��ǰ������: ",MAXSIZE-1);
	//do
	//{
	//	/* scanf("%d",&d); */
	//	d=i+100;
	//	if(d==-1)
	//		break;
	//	i++;
	//	EnQueue(&Q,d);
	//}while(i<MAXSIZE-1);

	//printf("���г���Ϊ: %d\n",QueueLength(Q));
	//printf("���ڶ��пշ�%u(1:�� 0:��)\n",QueueEmpty(Q));
	//printf("����%d���ɶ�ͷɾ��Ԫ��,��β����Ԫ��:\n",MAXSIZE);
	//for(l=1;l<=MAXSIZE;l++)
	//{
	//	DeQueue(&Q,&d);
	//	printf("ɾ����Ԫ����%d,�����Ԫ��:%d \n",d,l+1000);
	//	/* scanf("%d",&d); */
	//	d=l+1000;
	//	EnQueue(&Q,d);
	//}
	//l=QueueLength(Q);

	//printf("���ڶ����е�Ԫ��Ϊ: \n");
	//QueueTraverse(Q);
	//printf("�����β������%d��Ԫ��\n",i+MAXSIZE);
	//if(l-2>0)
	//	printf("�����ɶ�ͷɾ��%d��Ԫ��:\n",l-2);
	//while(QueueLength(Q)>2)
	//{
	//	DeQueue(&Q,&d);
	//	printf("ɾ����Ԫ��ֵΪ%d\n",d);
	//}

	//j=GetHead(Q,&d);
	//if(j)
	//	printf("���ڶ�ͷԪ��Ϊ: %d\n",d);
	//ClearQueue(&Q);
	//printf("��ն��к�, ���пշ�%u(1:�� 0:��)\n",QueueEmpty(Q));

	return 0;
}

