//��̬����StaticLinkList
//����ѧϰ�������ѡ������ݽṹ����main���ֿ������������������Լ�ʵ��
//1.��һ���ռ���"�׸�����"; ���һ���ռ���"�׸�����",��ĩ�ռ��൱��ͷ�ڵ�
//2.д����̬�����malloc/free����,������������,��θ�Ҳ����
//3.�ҵĴ������д��ע���꿴����ע��
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

#define MAXSIZE 1000 /* �洢�ռ��ʼ������ */

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
	//printf("��ʼ��L��L.length=%d\n", ListLength(L));

	//i = ListInsert(L, 1, 'F');
	//i = ListInsert(L, 1, 'E');
	//i = ListInsert(L, 1, 'D');
	//i = ListInsert(L, 1, 'B');
	//i = ListInsert(L, 1, 'A');

	//printf("\n��L�ı�ͷ���β���FEDBA��\nL.data=");
	//ListTraverse(L);

	//i = ListInsert(L, 3, 'C');
	//printf("\n��L�ġ�B���롰D��֮����롰C����\nL.data=");
	//ListTraverse(L);

	//i = ListDelete(L, 1);
	//printf("\n��L��ɾ����A����\nL.data=");
	//ListTraverse(L);

	//printf("\n");

	return 0;
}