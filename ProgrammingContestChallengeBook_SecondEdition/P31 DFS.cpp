// P31 DFS.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"stdio.h"

const int MAX_N = 20 + 1;
int n;//n个数
int k;//和为k
int a[MAX_N];//存储

bool dfs(int i, int sum) {
	//if (i > n)return false;
	if (i == n) return (sum == k);	//这个if其实是有了两层逻辑操作,另一个是sum和k是否相等
	if (dfs(i + 1, sum)) return true;
	if (dfs(i + 1, sum + a[i]))return true;
	return false;
}

void input() {
	scanf_s("%d", &n);
	scanf_s("%d", &k);
	for (int j = 0; j < n; j++) {
		scanf_s("%d", &a[j]);
	}
}

int main()
{
	input();//数组数字个数n,和k,数组各项录入

	if (dfs(0, 0)) printf("Yes\n");
	else printf("No\n");
    return 0;
}


//别人的代码,存储了那几个数可以凑出k   https://blog.csdn.net/qq_36294146/article/details/79882699
//#include "stdafx.h"
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int n, k, a[22], b[22];
//
//bool dfs(int i, int sum) {
//
//	//if (sum > k)return false;
//
//	if (i == n)return sum == k;
//
//	//not add a[i]
//
//	if (dfs(i + 1, sum)) {
//
//		b[i] = 0;
//
//		return true;
//
//	}
//
//	if (dfs(i + 1, sum + a[i])) {
//
//		b[i] = 1;
//
//		return true;
//
//	}
//
//	return false;
//
//}
//
//int main() {
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)cin >> a[i];
//
//	cin >> k;
//
//	if (dfs(0, 0)) {
//
//		cout << "Yes" << endl;
//
//
//
//		for (int i = 0; i < n; i++)
//
//		{
//
//			if (b[i])cout << a[i] << " ";
//
//
//
//		}
//
//		cout << endl;
//
//	}
//
//}
