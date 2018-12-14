//���Ա���ʽ�洢linkList(�˴�Ϊ��ͷ��㵥������)
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.�ҵĴ������д��ע���꿴����ע��
#include "stdio.h"    
#include "string.h"
#include "ctype.h"      
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
typedef int ElemType;

typedef struct Node {
	ElemType data;
	struct Node *next;
}Node;
typedef struct Node* LinkList;

Status InitList(LinkList* L) {
	(*L) = (LinkList)malloc(sizeof(Node));
	if (!(*L)) {
		return ERROR;
	}
	(*L)->next = NULL;//ͷָ��ǵó�ʼ��ΪNULL
	return OK;
}

Status ListLength(LinkList L) {
	/*����Ҫ������ж�
	if (NULL == L->next) {
	return 0;
	}*/
	int num = 0;
	LinkList p = L->next;
	while (p) {//����ɲ���p->next
		num++;
		p = p->next;
	}
	return num;
}

//����idx֮ǰ
Status ListInsert(LinkList *L, int idx, ElemType e) {
	LinkList prv_linkList = *L;
	int t_idx = idx;
	while (t_idx--&&t_idx > 1) {
		prv_linkList = prv_linkList->next;
	}
	LinkList toInsert = (LinkList)malloc(sizeof(Node));
	toInsert->data = e;
	toInsert->next = prv_linkList->next;
	prv_linkList->next = toInsert;
	return OK;
}

Status visit(ElemType c)
{
	printf("%d ", c);
	return OK;
}

Status ListTraverse(LinkList L)
{
	LinkList p = L->next;
	while (p)
	{
		visit(p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}

Status ListEmpty(LinkList L) {
	return NULL == L->next;
}

Status ClearList(LinkList *L) {
	LinkList p = (*L)->next;
	LinkList t_point;
	while (p)
	{
		t_point = p;
		p = p->next;
		free(t_point);
	}
	(*L)->next = NULL;
	return OK;
}

int main()
{
	LinkList L;
	ElemType e;
	Status i;
	int j, k;
	i = InitList(&L);
	printf("��ʼ��L��ListLength(L)=%d\n", ListLength(L));
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("��L�ı�ͷ���β���1��5��L.data=");
	ListTraverse(L);

	printf("ListLength(L)=%d \n", ListLength(L));
	i = ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	i = ClearList(&L);
	printf("���L��ListLength(L)=%d\n", ListLength(L));
	i = ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	//for (j = 1; j <= 10; j++)
	//	ListInsert(&L, j, j);
	//printf("��L�ı�β���β���1��10��L.data=");
	//ListTraverse(L);

	//printf("ListLength(L)=%d \n", ListLength(L));

	//ListInsert(&L, 1, 0);
	//printf("��L�ı�ͷ����0��L.data=");
	//ListTraverse(L);
	//printf("ListLength(L)=%d \n", ListLength(L));

	//GetElem(L, 5, &e);
	//printf("��5��Ԫ�ص�ֵΪ��%d\n", e);
	//for (j = 3; j <= 4; j++)
	//{
	//	k = LocateElem(L, j);
	//	if (k)
	//		printf("��%d��Ԫ�ص�ֵΪ%d\n", k, j);
	//	else
	//		printf("û��ֵΪ%d��Ԫ��\n", j);
	//}


	//k = ListLength(L); /* kΪ�� */
	//for (j = k + 1; j >= k; j--)
	//{
	//	i = ListDelete(&L, j, &e); /* ɾ����j������ */
	//	if (i == ERROR)
	//		printf("ɾ����%d������ʧ��\n", j);
	//	else
	//		printf("ɾ����%d����Ԫ��ֵΪ��%d\n", j, e);
	//}
	//printf("�������L��Ԫ�أ�");
	//ListTraverse(L);

	//j = 5;
	//ListDelete(&L, j, &e); /* ɾ����5������ */
	//printf("ɾ����%d����Ԫ��ֵΪ��%d\n", j, e);

	//printf("�������L��Ԫ�أ�");
	//ListTraverse(L);

	//i = ClearList(&L);
	//printf("\n���L��ListLength(L)=%d\n", ListLength(L));
	//CreateListHead(&L, 20);
	//printf("���崴��L��Ԫ��(ͷ�巨)��");
	//ListTraverse(L);

	//i = ClearList(&L);
	//printf("\nɾ��L��ListLength(L)=%d\n", ListLength(L));
	//CreateListTail(&L, 20);
	//printf("���崴��L��Ԫ��(β�巨)��");
	//ListTraverse(L);

	return 0;
}