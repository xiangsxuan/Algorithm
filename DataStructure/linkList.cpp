//线性表链式存储linkList(此处为有头结点单向链表)
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
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
	(*L)->next = NULL;//头指针记得初始化为NULL
	return OK;
}

Status ListLength(LinkList L) {
	/*不需要有这个判断
	if (NULL == L->next) {
	return 0;
	}*/
	int num = 0;
	LinkList p = L->next;
	while (p) {//这里可不是p->next
		num++;
		p = p->next;
	}
	return num;
}

//插在idx之前
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
	printf("初始化L后：ListLength(L)=%d\n", ListLength(L));
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("在L的表头依次插入1～5后：L.data=");
	ListTraverse(L);

	printf("ListLength(L)=%d \n", ListLength(L));
	i = ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n", i);

	i = ClearList(&L);
	printf("清空L后：ListLength(L)=%d\n", ListLength(L));
	i = ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n", i);

	//for (j = 1; j <= 10; j++)
	//	ListInsert(&L, j, j);
	//printf("在L的表尾依次插入1～10后：L.data=");
	//ListTraverse(L);

	//printf("ListLength(L)=%d \n", ListLength(L));

	//ListInsert(&L, 1, 0);
	//printf("在L的表头插入0后：L.data=");
	//ListTraverse(L);
	//printf("ListLength(L)=%d \n", ListLength(L));

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

	//i = ClearList(&L);
	//printf("\n清空L后：ListLength(L)=%d\n", ListLength(L));
	//CreateListHead(&L, 20);
	//printf("整体创建L的元素(头插法)：");
	//ListTraverse(L);

	//i = ClearList(&L);
	//printf("\n删除L后：ListLength(L)=%d\n", ListLength(L));
	//CreateListTail(&L, 20);
	//printf("整体创建L的元素(尾插法)：");
	//ListTraverse(L);

	return 0;
}