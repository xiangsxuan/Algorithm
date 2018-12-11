//���Ա�˳��洢List
#include "stdio.h"    

#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;          /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;        /* ElemType���͸���ʵ������������������Ϊint */

Status visit(ElemType c)
{
	printf("%d ", c);
	return OK;
}

typedef struct {
	ElemType data[MAXSIZE];
	int length;
}SqList;

Status InitList(SqList *L) {
	L->length = 0;
	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
Status ListTraverse(SqList L)
{
	int i;
	for (i = 0; i < L.length; i++)
		visit(L.data[i]);
	printf("\n");
	return OK;
}

Status ListInsert(SqList *L, int idx, ElemType e) {
	if (L->length == MAXSIZE || idx<1 || idx>L->length + 1) {
		return ERROR;
	}
	if (idx <= L->length)//����Ҫ������ж�,��������βʱ,��βԪ�ػᱻ�ƶ�
	{
		for (int i = L->length - 1; i >= idx - 1; i--) {
			//L->data[i] = L->data[i - 1];//����д����,����i+1λ��û�ƹ�ȥ����
			L->data[i + 1] = L->data[i];
		}
	}
	L->data[idx - 1] = e;
	L->length++;
	return OK;
}
int main()
{

	SqList L;
	SqList Lb;

	ElemType e;
	Status i;
	int j, k;
	i = InitList(&L);
	printf("��ʼ��L��L.length=%d\n", L.length);
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("��L�ı�ͷ���β���1��5��L.data=");
	ListTraverse(L);

	//printf("L.length=%d \n", L.length);
	//i = ListEmpty(L);
	//printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	//i = ClearList(&L);
	//printf("���L��L.length=%d\n", L.length);
	//i = ListEmpty(L);
	//printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	//for (j = 1; j <= 10; j++)
	//	ListInsert(&L, j, j);
	//printf("��L�ı�β���β���1��10��L.data=");
	//ListTraverse(L);

	//printf("L.length=%d \n", L.length);

	//ListInsert(&L, 1, 0);
	//printf("��L�ı�ͷ����0��L.data=");
	//ListTraverse(L);
	//printf("L.length=%d \n", L.length);

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

	////����һ����10������Lb
	//i = InitList(&Lb);
	//for (j = 6; j <= 15; j++)
	//	i = ListInsert(&Lb, 1, j);

	//unionL(&L, Lb);

	//printf("��������ϲ���Lb��L��Ԫ�أ�");
	//ListTraverse(L);

	return 0;
}