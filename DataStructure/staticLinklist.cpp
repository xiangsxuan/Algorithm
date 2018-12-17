//静态链表StaticLinkList
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.第一个空间存放"首个可用"; 最后一个空间存放"首个已用",最末空间相当于头节点
//2.写出静态链表的malloc/free函数,这样代码更清楚,层次感也更好
//3.我的错误点有写备注，详看代码注释
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

#define MAXSIZE 1000 /* 存储空间初始分配量 */

typedef int Status;
typedef char ElemType;

typedef struct {
	ElemType data;
	int next;
}Component, StaticLinkList[MAXSIZE];

int main()
{
	StaticLinkList L;
	Status i;
	//i = InitList(L);
	//printf("初始化L后：L.length=%d\n", ListLength(L));

	//i = ListInsert(L, 1, 'F');
	//i = ListInsert(L, 1, 'E');
	//i = ListInsert(L, 1, 'D');
	//i = ListInsert(L, 1, 'B');
	//i = ListInsert(L, 1, 'A');

	//printf("\n在L的表头依次插入FEDBA后：\nL.data=");
	//ListTraverse(L);

	//i = ListInsert(L, 3, 'C');
	//printf("\n在L的“B”与“D”之间插入“C”后：\nL.data=");
	//ListTraverse(L);

	//i = ListDelete(L, 1);
	//printf("\n在L的删除“A”后：\nL.data=");
	//ListTraverse(L);

	//printf("\n");

	return 0;
}