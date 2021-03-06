// P87 MergingAndFindingSet.cpp: 定义控制台应用程序的入口点。
//并查集实现

#include "stdafx.h"
#include<bits/stdc++.h>
const int MAX_N = 1000;
int par[MAX_N];//父节点
int rank[MAX_N];//树高度,简单起见,即使树高度发生变化,也不修改rank值

void initMFS(int n) {
	for (int i = 0; i < n; i++) {
		par[i] = i;//
		rank[i] = 0;
	}
}

//查询树根
int findMFS(int x) {
	if (x == par[x]) {
		return x;
	}
	else {
		par[x] = findMFS(par[x]);
	}
}
//合并x,y所属的集合
void unite(int x, int y) {
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
bool samMFS(int x, int y) {
	return findMFS(x) == findMFS(y);
}
int main()
{
	return 0;
}

