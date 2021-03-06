// P129 CrazyRows 2009Round2A.cpp: 定义控制台应用程序的入口点。
//
//备忘录:用i,j来当索引好容易粗心写错,以后还是用a,b来当索引
#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000;
int N = 4;
int M[MAX][MAX] = { {1,1,1,0} ,{1,1,0,0} ,{1,1,0,0} ,{1,0,0,0}, };
int a[MAX];//a[i]表示第i行最右边出现1的位置-----1~n-1    (注:
												//			1.这里把行抽象成了最右1的位置)
//															2.注释像1~n-1这样写上范围,很好
void solve() {
	////输入的数据 检测
	//printf("输入\n");
	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++) {
	//		printf("M[%d][%d]=%d\n",i,j,M[i][j]);
	//	}
	//}

	int res = 0;//结果, 交换次数

	//把行 抽象成 最右1的位置
	for (int i = 0; i < N; i++) {
		a[i] = -1;
		for (int j = 0; j < N; j++) {
			if (1 == M[i][j])	a[i] = j;
		}
	}

	////处理后a的值 检测
	//for (int j = 0; j < N; j++) {
	//	printf("a[%d]=%d\n", j, a[j]);
	//}

	//进行相邻交换
	for (int i = 0; i < N; i++) {
		//i层 对应于从上往下看的第i+1行(i+1的加1是因为i从0开始)
		int pos = -1;
		for (int j = i; j < N; j++) {
			if (i >= a[j]) {
				pos = j;
				break;
			}
		}
		//printf("pos=%d i=%d\n", pos,i);
		for (int j = pos; j > i;j--) {
			//用i,j来当索引好容易粗心写错,以后还是用a,b来当索引
			swap(a[j], a[j-1]);
			res++;
		}

	}
	
	printf("%d\n", res);
}
int main()
{
	solve();
    return 0;
}

