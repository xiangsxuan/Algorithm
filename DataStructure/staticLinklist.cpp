//��̬����StaticLinkList
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.��һ���ռ���"�׸�����"; ���һ���ռ���"�׸�����",��ĩ�ռ��൱��ͷ�ڵ�
//2.д����̬�����malloc/free����,������������,��θ�Ҳ����
//3.�ҵĴ������д��ע���꿴����ע��
#include "string.h"
#include "ctype.h"      

#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 1000 /* �洢�ռ��ʼ������ */

typedef int Status;
typedef char ElemType;

typedef struct {
	ElemType data;
	int next;
}Component, StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList L) {
	for (int i = 0; i < MAXSIZE; i++) {
		L[i].next = i + 1;
	}
	L[MAXSIZE - 1].next = 0;
	return OK;
}

int Malloc_SSL(StaticLinkList L) {
	int toUsed = L[0].next;
	L[0].next = L[toUsed].next;
	return toUsed;
}

int ListLength(StaticLinkList L) {
	int length = 0;
	int idx = L[MAXSIZE - 1].next;
	while (idx) {
		length++;
		idx = L[idx].next;
	}
	return length;
}
//��idx֮ǰ����
Status ListInsert(StaticLinkList L, int idx, ElemType e) {
	if (idx<1 || idx>ListLength(L) + 1) {
		return ERROR;
	}
	int toUsed = Malloc_SSL(L);//�׸�δ��
	if (toUsed) {
		L[toUsed].data = e;
		int prv_Insert = MAXSIZE - 1;//idxǰ���Ԫ��(��ʼ��ʱΪ�׸�����Ԫ��)
		while (idx > 1 && idx--) {
			prv_Insert = L[prv_Insert].next;
		}
		L[toUsed].next = L[prv_Insert].next;//����һ��ʼ��д����: L[toUsed].next = L[L[prv_Insert].next].next,����˼·�϶����ҳ�ɾ��Ԫ����
		L[prv_Insert].next = toUsed;
		return OK;
	}
}

Status ListTraverse(StaticLinkList L) {
	int traPoint = L[MAXSIZE - 1].next;
	while (traPoint) {
		printf(" %c ", L[traPoint].data);
		traPoint = L[traPoint].next;
	}
	printf("\n");
	return OK;
}

int main()
{
	StaticLinkList L;
	Status i;
	i = InitList(L);
	printf("��ʼ��L��L.length=%d\n", ListLength(L));

	i = ListInsert(L, 1, 'F');
	i = ListInsert(L, 1, 'E');
	i = ListInsert(L, 1, 'D');
	i = ListInsert(L, 1, 'B');
	i = ListInsert(L, 1, 'A');

	printf("\n��L�ı�ͷ���β���FEDBA��\nL.data=");
	ListTraverse(L);

	i = ListInsert(L, 3, 'C');
	printf("\n��L�ġ�B���롰D��֮����롰C����\nL.data=");
	ListTraverse(L);

	//i = ListDelete(L, 1);
	//printf("\n��L��ɾ����A����\nL.data=");
	//ListTraverse(L);

	//printf("\n");

	return 0;
}