// 程序3-4 竖式问题.cpp: 定义控制台应用程序的入口点。
//
//本次学习目的:练习下字符串操作函数
#include "stdafx.h"
#include<string.h>
#include<stdio.h>

char inputNum[20];
char buf[100];
int count = 1;

int main()
{
	scanf("%s", inputNum);//字符串读入,不读如空格enter等.这里不知道为什么用scanf_s有bug
	printf("%s\n", inputNum);
	for (int abc = 111; abc <= 999; abc++) {
		for (int de = 11; de <= 99; de++) {
			int x = abc * (de / 10);
			int y = abc * (de % 10);
			int z = abc * de;
			sprintf_s(buf, "%d%d%d%d%d", abc, de, x, y, z);//学习sprintf函数使用
			bool inSet = true;	//一开始把这个放在了最外面,导致影响到了同层别的情况更新!找了半天bug
								//以后写代码要在变量使用时再声明,一开始就全声明好就容易忘了作用域,生存期!
			for (int i = 0; i < strlen(buf); i++) {//学习strlen函数使用
				if (NULL == strchr(inputNum, buf[i])) {//学习strchar函数使用
					inSet = false;
				}
			}
			if (inSet) {
				printf("<%d>\n%5d\nX%4d\n----\n%5d\n%4d\n------\n%5d\n", count++, abc, de, x, y, z);
			}
		}
	}
	return 0;
}

