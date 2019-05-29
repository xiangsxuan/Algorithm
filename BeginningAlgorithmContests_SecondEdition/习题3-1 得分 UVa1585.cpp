// 习题3-1 得分 UVa1585.cpp: 定义控制台应用程序的入口点。
//
//本体关键在于: 设置一个mark表示出现O时,算上本次出现的O 累计连续出现了几个O
#include "stdafx.h"
#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
int main()
{
	char str[85];
	int testCase;
	scanf("%d", &testCase);
	while (testCase--)
	{
		scanf("%s", str);
		int mark = 1;
		int len = strlen(str);
		int sum=0;
		for (int i = 0; i < len;i++) {
			if ('O'==str[i]) {
				sum+=mark++;
			}else{
				mark = 1;
			}
		}
		printf("%d\n", sum);
	}
    return 0;
}