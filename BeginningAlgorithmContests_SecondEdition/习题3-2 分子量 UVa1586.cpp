// 习题3-2 分子量 UVa1586.cpp: 定义控制台应用程序的入口点。
//
//我的计算方法:i是字母的话,看 str[i+1]和str[i+2] 是不是数字
#include "stdafx.h"
#include<bits/stdc++.h>

int charToNum(char c) {
	return c - '0';
}

int main()
{
	double W[256];
	W['C'] = 12.01; W['H'] = 1.008; W['O'] = 16.00; W['N'] = 14.01;
	int testCase;

	scanf("%d", &testCase);
	while (testCase--) {
		char str[128];
		scanf("%s", str);
		int sz = strlen(str);
		double sum = 0.0;//答案
		for (int i = 0; i <sz; i++) {
			if (isalpha(str[i])) {
				if (isdigit(str[i + 1])&&isdigit(str[i+2])) {
					sum += W[str[i]] * (10 * charToNum(str[i + 1]) + charToNum(str[i + 2]));
				}
				else if (isdigit(str[i + 1])) {
					sum += W[str[i]] * (charToNum(str[i + 1]));
					//printf("sum=%d\n", sum);
				}
				else {
					sum += W[str[i]];
				}
				//printf("sum=%d\n",sum);
			}
		}
		printf("%.3f\n", sum);
		sum = 0.0;
	}

	return 0;
}