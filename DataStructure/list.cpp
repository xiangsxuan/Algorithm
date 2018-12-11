//线性表顺序存储List
#include "stdio.h"    

#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;          /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;        /* ElemType类型根据实际情况而定，这里假设为int */

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

/* 初始条件：顺序线性表L已存在 */
/* 操作结果：依次对L的每个数据元素输出 */
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
	if (idx <= L->length)//必须要有这个判断,否则插入表尾时,表尾元素会被移动
	{
		for (int i = L->length - 1; i >= idx - 1; i--) {
			//L->data[i] = L->data[i - 1];//这里写错了,这样i+1位就没移过去东西
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
	printf("初始化L后：L.length=%d\n", L.length);
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("在L的表头依次插入1～5后：L.data=");
	ListTraverse(L);

	//printf("L.length=%d \n", L.length);
	//i = ListEmpty(L);
	//printf("L是否空：i=%d(1:是 0:否)\n", i);

	//i = ClearList(&L);
	//printf("清空L后：L.length=%d\n", L.length);
	//i = ListEmpty(L);
	//printf("L是否空：i=%d(1:是 0:否)\n", i);

	//for (j = 1; j <= 10; j++)
	//	ListInsert(&L, j, j);
	//printf("在L的表尾依次插入1～10后：L.data=");
	//ListTraverse(L);

	//printf("L.length=%d \n", L.length);

	//ListInsert(&L, 1, 0);
	//printf("在L的表头插入0后：L.data=");
	//ListTraverse(L);
	//printf("L.length=%d \n", L.length);

	//GetElem(L, 5, &e);
	//printf("第5个元素的值为：%d\n", e);
	//for (j = 3; j <= 4; j++)
	//{
	//	k = LocateElem(L, j);
	//	if (k)
	//		printf("第%d个元素的值为%d\n", k, j);
	//	else
	//		printf("没有值为%d的元素\n", j);
	//}


	//k = ListLength(L); /* k为表长 */
	//for (j = k + 1; j >= k; j--)
	//{
	//	i = ListDelete(&L, j, &e); /* 删除第j个数据 */
	//	if (i == ERROR)
	//		printf("删除第%d个数据失败\n", j);
	//	else
	//		printf("删除第%d个的元素值为：%d\n", j, e);
	//}
	//printf("依次输出L的元素：");
	//ListTraverse(L);

	//j = 5;
	//ListDelete(&L, j, &e); /* 删除第5个数据 */
	//printf("删除第%d个的元素值为：%d\n", j, e);

	//printf("依次输出L的元素：");
	//ListTraverse(L);

	////构造一个有10个数的Lb
	//i = InitList(&Lb);
	//for (j = 6; j <= 15; j++)
	//	i = ListInsert(&Lb, 1, j);

	//unionL(&L, Lb);

	//printf("依次输出合并了Lb的L的元素：");
	//ListTraverse(L);

	return 0;
}