//两栈共享空间doubleStack(即同一空间,两个栈从两端用)
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
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
typedef int SElemType;

typedef struct
{

}SqDoubleStack;

Status visit(SElemType c)
{
	printf("%d ", c);
	return OK;
}

int main()
{
	//int j;
	//SqDoubleStack s;
	//int e;
	//if (InitStack(&s) == OK)
	//{
	//	for (j = 1; j <= 5; j++)
	//		Push(&s, j, 1);
	//	for (j = MAXSIZE; j >= MAXSIZE - 2; j--)
	//		Push(&s, j, 2);
	//}

	//printf("栈中元素依次为：");
	//StackTraverse(s);

	//printf("当前栈中元素有：%d \n", StackLength(s));

	//Pop(&s, &e, 2);
	//printf("弹出的栈顶元素 e=%d\n", e);
	//printf("栈空否：%d(1:空 0:否)\n", StackEmpty(s));

	//for (j = 6; j <= MAXSIZE - 2; j++)
	//	Push(&s, j, 1);

	//printf("栈中元素依次为：");
	//StackTraverse(s);

	//printf("栈满否：%d(1:否 0:满)\n", Push(&s, 100, 1));


	//ClearStack(&s);
	//printf("清空栈后，栈空否：%d(1:空 0:否)\n", StackEmpty(s));

	return 0;
}