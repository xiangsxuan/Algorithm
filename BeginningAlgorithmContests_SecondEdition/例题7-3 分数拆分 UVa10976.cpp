// 例题7-3 分数拆分 UVa10976.cpp: 定义控制台应用程序的入口点。
//
//第一个循环判断条件写成了scanf("%d", &k) == 1 & k   少了一个&,   额,晕,找了半天错
#include "stdafx.h"
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	while (scanf("%d", &k) == 1 && k) {
		vector<int> X, Y;
		for (int y = k + 1; y <= 2 * k; y++) {
			//1/k=1/x+1/y => x=ky/(y-k)
			if (0==k*y%(y-k)) {
				X.push_back(k*y/(y - k));
				Y.push_back(y);
			}
		}
		printf("%d\n", X.size());
		for (int i = 0; i < X.size(); i++)
			printf("1/%d = 1/%d + 1/%d\n", k, X[i], Y[i]);
	}
	return 0;
}