//链栈linkStack
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

typedef struct StackNode
{

}StackNode, *LinkStackPtr;

typedef struct
{

}LinkStack;

Status visit(SElemType c)
{
	printf("%d ", c);
	return OK;
}

int main()
{
	//int j;
	//LinkStack s;
	//int e;
	//if (InitStack(&s) == OK)
	//	for (j = 1; j <= 10; j++)
	//		Push(&s, j);
	//printf("栈中元素依次为：");
	//StackTraverse(s);
	//Pop(&s, &e);
	//printf("弹出的栈顶元素 e=%d\n", e);
	//printf("栈空否：%d(1:空 0:否)\n", StackEmpty(s));
	//GetTop(s, &e);
	//printf("栈顶元素 e=%d 栈的长度为%d\n", e, StackLength(s));
	//ClearStack(&s);
	//printf("清空栈后，栈空否：%d(1:空 0:否)\n", StackEmpty(s));
	return 0;
}