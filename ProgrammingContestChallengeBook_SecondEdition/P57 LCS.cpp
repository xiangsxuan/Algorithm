// P57 LCS.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 10;
int n = 6;//s长度
int m = 6;//t长度
char s[] = {'a','b','c','d','d','c'};
char t[] = {'b','e','c','d','c','d'};

int dp[MAX_N][MAX_N] = {0};

void solve() {
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			if (s[a] == t[b]) {
				dp[a+1][b+1] = dp[a][b] + 1;
				//printf("dp[%d][%d]=%d\n", a + 1, b + 1, dp[a + 1][b + 1]);
			}
			else {
				dp[a + 1][b + 1] = max(dp[a + 1][b], dp[a][b+1]);
				//printf("dp[%d][%d]=%d\n", a + 1, b + 1, dp[a + 1][b + 1]);
			}
		}
	}
	printf("%d\n",dp[n][m]);
}

int main() {
	solve();
	return 0;
}


