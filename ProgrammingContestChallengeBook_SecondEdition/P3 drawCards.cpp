// P3 drawCards.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>

const int MAX_N = 50;

int main()
{
	int n, m, k[MAX_N];

	//从标准输入读入
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &k[i]);
	}

	bool f = false;

	//通过四重循环枚举所有方案
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			for (int c = 0; c < n; c++) {
				for (int d = 0; d < n; d++) {
					if (k[a] + k[b] + k[c] + k[d] == m)
						f = true;
				}
			}
		}
	}
	if (f)puts("Yes\n");
	else puts("No\n");
	return 0;
}



