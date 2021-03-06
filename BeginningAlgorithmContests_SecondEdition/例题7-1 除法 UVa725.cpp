// 例题7-1 除法 UVa725.cpp: 定义控制台应用程序的入口点。
//
//一开始没注意输出格式,符号两边各有一个空格没注意到
#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char buf[64];
	int testCase = 0;
	while (scanf("%d", &n) ==1 && n != 0) {
		if(testCase++) printf("\n");//输出换行,第一行不换行
		bool hasExampl=false;//有这样的除数和被除数
		for (int fghij = 1234;; fghij++) {
			int abcde = fghij * n;
			sprintf(buf, "%05d%05d", abcde, fghij);
			if (strlen(buf) > 10) break;
			sort(buf, buf + 10);
			bool ok = true;
			for (int i = 0; i < 10; i++) {
				if ((buf[i] - '0') != i) {
					ok = false;
				}
			}
			if (ok) {
				hasExampl = true;
				printf("%05d / %05d = %d\n", abcde, fghij, n);
			}
		}
		if (!hasExampl) {
			printf("There are no solutions for %d.\n", n);//没有符合的式子,输出,并换行
		}
	}
    return 0;
}