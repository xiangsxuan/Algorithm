// P32 LakeCounting POJ2386.cpp: 定义控制台应用程序的入口点。
//这道题我把==写成了=,以至于找了很久的错误!

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int MAX_N = 100;
const int MAX_M = 100;
int m;//行数
int n;//列数
char field[MAX_N + 10][MAX_M + 10]; //园子

void input() {
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			cin>>field[a][b];
		}
	}
}

void dfs(int x, int y) {
	field[x][y] = '.';
	//循环遍历八个方向
	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			int nx = x + dx, ny = y + dy;
			//判断(nx,ny)是否在园子里，以及是否有积水
			printf("%d %d\n", nx, ny);
			if (0 <= nx && nx<n && 0 <= ny && ny<m&&field[nx][ny] == 'W') {
				dfs(nx, ny);
			}
		}
	}
	return;
}

int solve() {
	int res = 0;

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			if ('W'==field[a][b]) {
				dfs(a, b);
				res++;
			}
		}
	}
	printf("%d", res);
	return 0;
}
int main()
{
	input();
	solve();
	return 0;
}

