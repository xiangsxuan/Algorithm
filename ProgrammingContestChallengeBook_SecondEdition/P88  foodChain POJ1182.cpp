// P88  foodChain POJ1182.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<bits/stdc++.h>
const int MAX_N = 1000;
int par[MAX_N];//父节点
int rank[MAX_N];//树高度,简单起见,即使树高度发生变化,也不修改rank值

///并查集实现
//初始化
void initMFS(int n) {
	for (int i = 0; i < n; i++) {
		par[i] = i;//父节点初始化为自己
		rank[i] = 0;
	}
}
//查询树根,树根为集合的代表
int findMFS(int x) {
	if (x == par[x]) {
		return x;
	}
	else {
		par[x] = findMFS(par[x]);
	}
}
//合并x,y所属的集合
void uniteMFS(int x, int y) {
	x = findMFS(x);
	y = findMFS(y);
	if (x == y) {
		return;
	}

	if (rank[x] < rank[y]) {
		par[x] = y;
	}
	else {
		par[y] = x;
		if (rank[x] == rank[y]) {
			rank[x]++;
		}
	}

}
//判断是否属于同一集合
bool sameMFS(int x, int y) {
	return findMFS(x) == findMFS(y);
}

//输入
const  int  MAX_K = 100000;
int N = 100;
int K = 7;
int T[MAX_K + 10] = { 1  ,2,2,2,1,2,1 };//标识 是第一种信息还是第二种信息
int X[MAX_K + 10] = { 101,1,2,3,1,3,5 };//输入时x的值
int Y[MAX_K + 10] = { 1  ,2,3,3,3,1,5 };//输入时y的值


int main()
{
	//初始化并查集
	initMFS(3 * N);

	int ans = 0;//结果,错误条数
	for (int i = 0; i < K; i++) {
		int t = T[i];
		int x = X[i] - 1;//转换到0到N-1范围
		int y = Y[i] - 1;//转换到0到N-1范围

		//输入不合法,超出动物的编号范围
		if (x<0 || y<0 || x>N || y>N) {
			continue;
			ans++;
			printf("第%d组:%d %d %d\n",i + 1, t, x + 1, y + 1);
		}

		if (1 == t) {
			if (sameMFS(x, y + N) || sameMFS(x, y + 2 * N)) {
				//检查x在A,y在B      检查x在A,y在C
				ans++;
				printf("第%d组:%d %d %d\n", i + 1, t, x + 1, y + 1);
			}
			else {
				uniteMFS(x, y);
				uniteMFS(x + N, y + N);
				uniteMFS(x + 2 * N, y + 2 * N);
			}
		}
		else if (2 == t) {
			if (sameMFS(x, y) || sameMFS(x , y + 2 * N)) {
				//检查x在A,y也在A      检查x在A,y在C
				ans++;
				printf("第%d组:%d %d %d\n", i+1, t, x + 1, y + 1);
			}
			else {
				uniteMFS(x, y + N);
				uniteMFS(x + N, y + 2 * N);
				uniteMFS(x + 2 * N, y);
			}
		}
	}

	printf("%d\n", ans);
	return 0;
}

