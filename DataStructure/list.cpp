//线性表顺序存储list
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.指针->成员  结构体名.成员
//  注意："->"前面跟的是指针，指针->成员 基本等同于 (*结构体名).成员
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
	if (L->length == MAXSIZE || idx < 1 || idx > L->length + 1) {//注意最后一个条件idx > L->length + 1
		return ERROR;
	}
	if (idx <= L->length)//注：必须要有这个判断,否则插入表尾时,表尾元素会被移动
	{
		for (int i = L->length - 1; i >= idx - 1; i--) {
			//错误代码：L->data[i] = L->data[i - 1];这样i+1位就没移进去东西
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
	for (int i = 0; i <= L.length - 1; i++) {//注意边界，注意有没有等号
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
		L->data[i] = L->data[i + 1];//一定要把边界带进来看下成立不，看下越界没有

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
		//一开始错写成
	  //ListInsert(L, i + 1 + L->length,  Lb.data[i]);
		//这样写插入元素后length会随i增加1，length会变化的话，代码的含义就变了
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
	printf("初始化L后：L.length=%d\n", L.length);
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("在L的表头依次插入1～5后：L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);
	bool isEmpty = ListEmpty(L);
	printf("L.length=%d   ", L.length);
	printf("L是否空 ：i=%d(1:是 0:否)\n", isEmpty);

	i = ClearList(&L);
	printf("清空L后：L.length=%d\n", L.length);
	i = ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n", i);

	for (j = 1; j <= 10; j++)
		ListInsert(&L, j, j);
	printf("在L的表尾依次插入1～10后：L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);

	ListInsert(&L, 1, 0);
	printf("在L的表头插入0后：L.data=");
	ListTraverse(L);
	printf("L.length=%d \n", L.length);

	GetElem(L, 5, &e);
	printf("第5个元素的值为：%d\n", e);
	for (j = 9; j <= 11; j++)
	{
		k = LocateElem(L, j);
		if (k)
			printf("第%d个元素的值为%d\n", k, j);
		else
			printf("没有值为%d的元素\n", j);
	}


	k = ListLength(L); /* k为表长 */
	for (j = k + 1; j >= k; j--)
	{
		i = ListDelete(&L, j, &e); /* 删除第j个数据 */
		if (i == ERROR)
			printf("删除第%d个数据失败\n", j);
		else
			printf("删除第%d个的元素值为：%d\n", j, e);
	}
	printf("依次输出L的元素：");
	ListTraverse(L);

	j = 5;
	ListDelete(&L, j, &e); /* 删除第5个数据 */
	printf("删除第%d个的元素值为：%d\n", j, e);

	printf("依次输出L的元素：");
	ListTraverse(L);

	//构造一个有10个数的Lb
	i = InitList(&Lb);
	for (j = 6; j <= 15; j++)
		i = ListInsert(&Lb, 1, j);
	printf("依次输出Lb的元素：");
	ListTraverse(L);
	unionL(&L, Lb);

	printf("依次输出合并了Lb的L的元素：");
	ListTraverse(L);

	return 0;
}