// P17 triangle.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>

const int MAX_N = 100;
int n;				//边数
int len[MAX_N];		//每个边的长度
int ans = 0;		//最大周长,0 代表无法组成三角形

int max(int first, int second) {
	if (first > second) {
		return first;
	}
	else {
		return second;
	}
}

void solve() {

	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			for (int c = b + 1; c < n; c++) {

				int allLength = len[a] + len[b] + len[c];			//周长

				int maxLength = max(len[a], max(len[b], len[c]));	//最长边

				if (maxLength < (allLength - maxLength)) {
					ans = max(ans, allLength);
				}
			}
		}
	}

}


int main()
{
	//int n, len[MAX_N];
	//↑一开始错把声明放在这儿了. (但是为什么放在这儿solve函数调用直接退出?)
	scanf_s("%d", &n);
	for (int a = 0; a < n; a++) {
		scanf_s("%d", &len[a]);
	}
	solve();
	printf_s("%d\n", ans);
	return 0;
}


