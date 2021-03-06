// P77 FenceRepair PKU3253.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX_N = 20000;
int n = 3;//木板分段 总段数
int block[MAX_N + 10] = { 8,5,8 };//各木板分段的 长度
//output:34

int main()
{
	priority_queue<int, vector<int>, greater<int>> que;
	for (int i = 0; i < n; i++) {
		que.push(block[i]);
	}
	int ans = 0;
	while (que.size() > 1)
	{
		int length_1 = que.top();	//最短的两段之1
		que.pop();
		int length_2 = que.top();	//最短的两段之2
		que.pop();

		ans += length_1 + length_2;
		que.push(length_1 + length_2);

	}
	printf("%d\n", ans);
	return 0;
}

