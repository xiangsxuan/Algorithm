// 例题7-2 最大乘积 UVa11059.cpp: 定义控制台应用程序的入口点。
//
//1.考虑溢出
//2.空行输出
//3.printf输出longlong要用lld占位
#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("output.txt", "w", stdout);
	int S[64];
	int n;
	int caseNum = 1;
	while (scanf("%d", &n) == 1) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &S[i]);
		}
		//long long sum = 1;   sum怎么会写在这里...脑子炸了么...要写在第一层for里面啊....
		long long maxSum = 0;//直接初始化为0,这样输出时就不需要像已经注释掉的部分那么麻烦了
		for (int i = 0; i < n; i++) {
			long long tSum = 1;
			for (int j = i; j < n; j++) {
				tSum *= S[j];
				if (maxSum < tSum) maxSum = tSum;
			}
			//if (maxSum < tSum) maxSum = tSum;  判断写在这里...还怎么遍及所有情况..呃呃
		}
		/*if (maxSum > 0) {*/
		printf("Case #%d: The maximum product is %lld.\n\n", caseNum++, maxSum);
		/*}
		else {
			printf("Case #%d: The maximum product is 0.\n\n", caseNum++);
		}*/
	}

	return 0;
}