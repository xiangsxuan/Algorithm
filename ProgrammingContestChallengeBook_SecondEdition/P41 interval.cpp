// P41 interval.cpp: 定义控制台应用程序的入口点。
//
/*
input:
5
1 2 4 6 8
3 5 7 9 10
output:
3
*/
#include "stdafx.h"
#include "utility"
#include<stdio.h>
#include<algorithm>
using namespace std;
const int MAX_N = 100000;
int n;//n项工作
int s[MAX_N];//开始时间
int t[MAX_N];//结束时间

//输入
void input() {
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &t[i]);
	}
	//检查数据录入正确否
	//for (int i = 0; i < n; i++) {
	//	printf("%d %d\n", s[i], t[i]);
	//}
}

//算法函数
void solve() {
	pair<int, int> interval[MAX_N];//<结束时间,开始时间>
	for (int i = 0; i < n; i++) {
		/*一开始错写成了
		interval->first = t[i];//结束时间
		interval->second = s[i];//开始时间
		*/
		interval[i].first = t[i];//结束时间
		interval[i].second = s[i];//开始时间
	}
	//检查数据是否正确转存到pair
	//for (int i = 0; i < n; i++) {
	//	printf("%d %d\n", interval[i].first, interval[i].second);
	//}
	sort(interval,interval+n);//按结束时间排序
	
	int ans = 0;//结果,可达成的工作区间段数
	int t = 0;//t记录走到了哪个时间点
	for (int a = 0; a < n; a++) {
		//printf("--a=%d\n", a);
		//printf("--t=%d\n", t);
		//printf("--interval[a].second=%d\n", interval[a].second);
		if (t < interval[a].second) {
			ans++;
			t = interval[a].first;
			
		/*	printf("===\n");
			printf("a=%d\n", a);
			printf("n=%d\n", n);
			printf("ans=%d\n", ans);
			printf("t=%d\n", t);
			printf("===\n");*/
		}
	}
	printf("%d\n", ans);
}
int main()
{
	input();
	solve();
	return 0;
}

