//���Ա�˳��洢list
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.ָ��->��Ա  �ṹ����.��Ա
//  ע�⣺"->"ǰ�������ָ�룬ָ��->��Ա ������ͬ�� (*�ṹ����).��Ա
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
typedef int ElemType;

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

Status ListTraverse(SqList L)
{
	int i;
	for (i = 0; i < L.length; i++)
		visit(L.data[i]);
	printf("\n");
	return OK;
}

Status ListInsert(SqList *L, int idx, ElemType e) {
	if (L->length == MAXSIZE || idx < 1 || idx > L->length + 1) {//ע�����һ������idx > L->length + 1
		return ERROR;
	}
	if (idx <= L->length)//ע������Ҫ������ж�,��������βʱ,��βԪ�ػᱻ�ƶ�
	{
		for (int i = L->length - 1; i >= idx - 1; i--) {
			//������룺L->data[i] = L->data[i - 1];����i+1λ��û�ƽ�ȥ����
			L->data[i + 1] = L->data[i];
		}
	}
	L->data[idx - 1] = e;
	L->length++;
	return OK;
}

Status ListEmpty(SqList L) {
	if (L.length == 0) {
		return TRUE;
	}
	return FALSE;
}

Status ClearList(SqList *L) {
	L->length = 0;
	return OK;
}

Status GetElem(SqList L, int idx, ElemType *e) {
	if (L.length == 0 || idx < 1 || idx > L.length) {
		return ERROR;
	}
	*e = L.data[idx - 1];
	return OK;
}

int LocateElem(SqList L, ElemType e) {
	if (L.length == 0) return 0;
	for (int i = 0; i <= L.length - 1; i++) {//ע��߽磬ע����û�еȺ�
		if (L.data[i] == e) return i + 1;
	}
	return FALSE;
}

int ListLength(SqList L) {
	return L.length;
}

Status ListDelete(SqList *L, int idx, ElemType *e) {
	if (L->length == 0 || idx > L->length || idx < 1) {
		return ERROR;
	}
	*e = L->data[idx - 1];
	if (idx == L->length) {
		L->length--;
		return OK;
	}
	for (int i = idx - 1; i < L->length; i++) {
		L->data[i] = L->data[i + 1];//һ��Ҫ�ѱ߽���������³�����������Խ��û��

	}
	L->length--;
	return OK;
}

Status unionL(SqList *L, SqList Lb) {
	if (MAXSIZE < L->length + Lb.length) {
		return ERROR;
	}
	int prv_length = L->length;
	for (int i = 0; i < Lb.length; i++) {
		//һ��ʼ��д��
	  //ListInsert(L, i + 1 + L->length,  Lb.data[i]);
		//����д����Ԫ�غ�length����i����1��length��仯�Ļ�������ĺ���ͱ���
		ListInsert(L, i + 1 + prv_length, Lb.data[i]);
	}
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

	printf("L.length=%d \n", L.length);
	bool isEmpty = ListEmpty(L);
	printf("L.length=%d   ", L.length);
	printf("L�Ƿ�� ��i=%d(1:�� 0:��)\n", isEmpty);

	i = ClearList(&L);
	printf("���L��L.length=%d\n", L.length);
	i = ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	for (j = 1; j <= 10; j++)
		ListInsert(&L, j, j);
	printf("��L�ı�β���β���1��10��L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);

	ListInsert(&L, 1, 0);
	printf("��L�ı�ͷ����0��L.data=");
	ListTraverse(L);
	printf("L.length=%d \n", L.length);

	GetElem(L, 5, &e);
	printf("��5��Ԫ�ص�ֵΪ��%d\n", e);
	for (j = 9; j <= 11; j++)
	{
		k = LocateElem(L, j);
		if (k)
			printf("��%d��Ԫ�ص�ֵΪ%d\n", k, j);
		else
			printf("û��ֵΪ%d��Ԫ��\n", j);
	}


	k = ListLength(L); /* kΪ�� */
	for (j = k + 1; j >= k; j--)
	{
		i = ListDelete(&L, j, &e); /* ɾ����j������ */
		if (i == ERROR)
			printf("ɾ����%d������ʧ��\n", j);
		else
			printf("ɾ����%d����Ԫ��ֵΪ��%d\n", j, e);
	}
	printf("�������L��Ԫ�أ�");
	ListTraverse(L);

	j = 5;
	ListDelete(&L, j, &e); /* ɾ����5������ */
	printf("ɾ����%d����Ԫ��ֵΪ��%d\n", j, e);

	printf("�������L��Ԫ�أ�");
	ListTraverse(L);

	//����һ����10������Lb
	i = InitList(&Lb);
	for (j = 6; j <= 15; j++)
		i = ListInsert(&Lb, 1, j);
	printf("�������Lb��Ԫ�أ�");
	ListTraverse(L);
	unionL(&L, Lb);

	printf("��������ϲ���Lb��L��Ԫ�أ�");
	ListTraverse(L);

	return 0;
}