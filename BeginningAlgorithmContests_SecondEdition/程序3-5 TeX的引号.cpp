// 程序3-5 TeX的引号.cpp: 定义控制台应用程序的入口点。
//
//本次学习目的:了解getchar()函数,其 返回类型为int型，为用户输入的ASCII码或EOF
#include "stdafx.h"
#include<stdio.h>

int main()
{
	int c, q = 1;
	while ((c = getchar()) != EOF) {
		if ('"' ==c) {
			printf("%s",(q)? "``":"\"");
			q = !q;//q=1-q;
		}
		else {
			printf("%c", c);
		}
	}
    return 0;
}