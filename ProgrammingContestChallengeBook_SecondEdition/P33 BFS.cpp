// P33 BFS.cpp: 定义控制台应用程序的入口点。
//
/*输入
10 10
# S # # # # # # . #
. . . . . . # . . #
. # . # # . # # . #
. # . . . . . . . .
# # . # # . # # # #
. . . . # . . . . #
. # # # # # # # . #
. . . . # . . . . .
. # # # # . # # # .
. . . . # . ..G #
			  */
/*输出:22*/
#include "stdafx.h"
#include"stdio.h"
#include<queue>
#include<iostream>
#include<cstdio>
#include<utility>
using namespace std;
#define INF 0xfffff;
const int MAX_N = 100;
const int MAX_M = 100;
int n;//行数
int m;//列数
char maze[MAX_N+10][MAX_M+10];
int sx, sy;
int gx, gy;
typedef pair<int, int> P;
int dist[MAX_N][MAX_M];
int disVarX[4] = { 1,0,-1,0 };
int disVarY[4] = { 0,1,0,-1 };
//输入
void input() {
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'S') {
				sx = i;
				sy = j;
			}
			if (maze[i][j] == 'G') {
				gx = i;
				gy = j;
			}
		}
	}
}
int bfs() {
	queue<P> que;
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			dist[a][b] = 0xfffff;
		}
	}
	que.push(P(sx, sy));
	dist[sx][sy] = 0;
	while (que.size())
	{
		P p = que.front();
		que.pop();
		if (p.first == gx && p.second == gy)
			break;
		for (int i = 0; i < 4; i++) {
			int nx = p.first + disVarX[i];
			int ny = p.second + disVarY[i];
			
			if (0 <= nx && nx<n &&ny >= 0 && ny<m&&maze[nx][ny] != '#'&&dist[nx][ny] == 0xfffff) {
				que.push(P(nx, ny));
				dist[nx][ny] = dist[p.first][p.second] + 1;
			}
		}
	}
	return dist[gx][gy];
}
void solve() {
	int res=bfs();
	printf("%d",res);
}
int main()
{
	input();
	solve();
    return 0;
}
