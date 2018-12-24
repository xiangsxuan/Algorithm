//字符串String
//本处学习方法：把《大话数据结构》的main部分拷贝过来，其他部分自己实现
//1.我的错误点有写备注，详看代码注释
#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 40

typedef int Status;
typedef int ElemType;	

typedef char String[MAXSIZE+1]; /*  0号单元存放串的长度 */

/* 生成一个其值等于chars的串T */
Status StrAssign(String T,char *chars)
{ 
	
}

/* 由串S复制得串T */
Status StrCopy(String T,String S)
{ 
	
}

/* 若S为空串,则返回TRUE,否则返回FALSE */
Status StrEmpty(String S)
{ 
	
}

/*  初始条件: 串S和T存在 */
/*  操作结果: 若S>T,则返回值>0;若S=T,则返回值=0;若S<T,则返回值<0 */
int StrCompare(String S,String T)
{ 
	
}

/* 返回串的元素个数 */
int StrLength(String S)
{ 
	
}

/* 初始条件:串S存在。操作结果:将S清为空串 */
Status ClearString(String S)
{ 
	
}

/* 用T返回S1和S2联接而成的新串。若未截断，则返回TRUE，否则FALSE */
Status Concat(String T,String S1,String S2)
{
	
}

/* 用Sub返回串S的第pos个字符起长度为len的子串。 */
Status SubString(String Sub,String S,int pos,int len)
{
	
}

/* 返回子串T在主串S中第pos个字符之后的位置。若不存在,则函数返回值为0。 */
/* 其中,T非空,1≤pos≤StrLength(S)。 */
int Index(String S, String T, int pos) 
{
	
}

/*  T为非空串。若主串S中第pos个字符之后存在与T相等的子串， */
/*  则返回第一个这样的子串在S中的位置，否则返回0 */
int Index2(String S, String T, int pos) 
{
	
}


/*  初始条件: 串S和T存在,1≤pos≤StrLength(S)+1 */
/*  操作结果: 在串S的第pos个字符之前插入串T。完全插入返回TRUE,部分插入返回FALSE */
Status StrInsert(String S,int pos,String T)
{ 
	
}

/*  初始条件: 串S存在,1≤pos≤StrLength(S)-len+1 */
/*  操作结果: 从串S中删除第pos个字符起长度为len的子串 */
Status StrDelete(String S,int pos,int len)
{ 
	
}

/*  初始条件: 串S,T和V存在,T是非空串（此函数与串的存储结构无关） */
/*  操作结果: 用V替换主串S中出现的所有与T相等的不重叠的子串 */
Status Replace(String S,String T,String V)
{ 
	
}

/*  输出字符串T */
void StrPrint(String T)
{ 
	
}

int main()
{
	//int i,j;
	//Status k;
	//char s;
	//String t,s1,s2;
	//printf("请输入串s1: ");
	//
	//k=StrAssign(s1,"abcd");
	//if(!k)
	//{
	//	printf("串长超过MAXSIZE(=%d)\n",MAXSIZE);
	//	exit(0);
	//}
	//printf("串长为%d 串空否？%d(1:是 0:否)\n",StrLength(s1),StrEmpty(s1));
	//StrCopy(s2,s1);
	//printf("拷贝s1生成的串为: ");
	//StrPrint(s2);
	//printf("请输入串s2: ");
	//
	//k=StrAssign(s2,"efghijk");
	//if(!k)
	//{
	//	printf("串长超过MAXSIZE(%d)\n",MAXSIZE);
	//	exit(0);
	//}
	//i=StrCompare(s1,s2);
	//if(i<0)
	//	s='<';
	//else if(i==0)
	//	s='=';
	//else
	//	s='>';
	//printf("串s1%c串s2\n",s);
	//k=Concat(t,s1,s2);
	//printf("串s1联接串s2得到的串t为: ");
	//StrPrint(t);
	//if(k==FALSE)
	//	printf("串t有截断\n");
	//ClearString(s1);
	//printf("清为空串后,串s1为: ");
	//StrPrint(s1);
	//printf("串长为%d 串空否？%d(1:是 0:否)\n",StrLength(s1),StrEmpty(s1));
	//printf("求串t的子串,请输入子串的起始位置,子串长度: ");

	//i=2;
	//j=3;
	//printf("%d,%d \n",i,j);

	//k=SubString(s2,t,i,j);
	//if(k)
	//{
	//	printf("子串s2为: ");
	//	StrPrint(s2);
	//}
	//printf("从串t的第pos个字符起,删除len个字符，请输入pos,len: ");
	//
	//i=4;
	//j=2;
	//printf("%d,%d \n",i,j);


	//StrDelete(t,i,j);
	//printf("删除后的串t为: ");
	//StrPrint(t);
	//i=StrLength(s2)/2;
	//StrInsert(s2,i,t);
	//printf("在串s2的第%d个字符之前插入串t后,串s2为:\n",i);
	//StrPrint(s2);
	//i=Index(s2,t,1);
	//printf("s2的第%d个字母起和t第一次匹配\n",i);
	//SubString(t,s2,1,1);
	//printf("串t为：");
	//StrPrint(t);
	//Concat(s1,t,t);
	//printf("串s1为：");
	//StrPrint(s1);
	//Replace(s2,t,s1);
	//printf("用串s1取代串s2中和串t相同的不重叠的串后,串s2为: ");
	//StrPrint(s2);

	return 0;
}