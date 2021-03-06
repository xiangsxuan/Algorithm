// 7.3.3 枚举子集_二进制法.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void print_subset(int n, int s) {  // 打印{0, 1, 2, ..., n-1}的子集S
	for (int i = 0; i < n; i++)
		if (s&(1 << i)) printf("%d ", i); // 这里利用了C语言“非0值都为真”的规定
	printf("\n");
}

//辅助理解C语言中的右移<<操作符 ,以及怎么弄出全集
void leftMove() {
	int number1 = 1;
	char string1[25];
	int number2 = 1 << 1;
	char string2[25];
	int number4 = 1 << 2;
	char string4[25];
	int number5 = (1 << 2)-1;
	char string5[25];
	itoa(number5, string5, 2);
	itoa(number1, string1, 2);
	itoa(number2, string2, 2);
	itoa(number4, string4, 2);
	printf("1:               十进制数：%d，二进制数：%s\n", number1, string1);
	printf("1<<1:            十进制数：%d，二进制数：%s\n", number2, string2);
	printf("1<<2:            十进制数：%d，二进制数：%s\n", number4, string4);
	printf("1<<2-1(2位全集:) 十进制数：%d，二进制数：%s\n", number5, string5);
}
int main() {
	leftMove();
	int n;
	scanf("%d", &n);
	//for (int i = 0; i < (1 << n); i++)  // 枚举各子集所对应的编码 0, 1, 2, ..., 2^n-1
		print_subset(n, 0);
		printf("\n");
		print_subset(n, 1);
		printf("\n");
		print_subset(n, 2);
	return 0;
}
