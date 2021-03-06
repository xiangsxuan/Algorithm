// P76 expedition POJ2431.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1000000;
int L = 25;//总距离
int P = 10;//初始汽油
int N = 4;//加油站数量
int A[MAX_N + 10] = { 10,14,20,21 };//加油站到起点距离
int B[MAX_N + 10] = { 10, 5, 2, 4 };//加油站油量

int main()
{
	A[N] = L;//终点
	B[N] = 0;//终点油量
	N++;

	priority_queue<int> que;

	int pos = 0;//当前行驶到的位置
	int tank = P;//剩余油量(初始油量不为0)
	int ans = 0;//加油次数,即答案   做题要先考虑一部分,再考虑其他部分, 这里可以在模拟完整个过程后再添加上计算ans的部分
	for (int i = 0; i < N; i++) {
		int d = A[i] - pos;//到下一个加油点的距离

		//确保加油加到 可以行驶到下一个加油站
		while (tank - d < 0) {
			if (que.empty()) {
				puts("-1");
				return 0;
			}
			tank += que.top();
			que.pop();
			printf("走到了%d\n",pos);
			ans++;
		}

		tank -= d;
		que.push(B[i]);
		pos = A[i];
	}
	printf("%d\n", ans);
	return 0;
}

