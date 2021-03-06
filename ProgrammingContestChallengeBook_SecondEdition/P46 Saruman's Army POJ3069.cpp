// P46 Saruman's Army POJ3069.cpp: 定义控制台应用程序的入口点。
//
//1,因输入并非该算法的重点,故数据输入步骤省略了,直接在初始化变量时赋值了.
//2,<挑战>书上的样例输入:1 7 15 20 30 50.(详情看<挑战程序设计竞赛>P46-47) 
//  标记点含20,我的不含,起作用的标记点为30.
//  两个结果都是对的,但是我觉得书上的思路不够明晰,
//  本题是按照我的思路来写的
/*
Sample Input
0 3
10 20 20
10 7
70 30 1 7 15 20 50
-1 -1
Sample Output
2
4
*/
#include "stdafx.h"
#include<algorithm>
using namespace std;
const int MAX_N = 1000;

int n = 7;	//点的个数
int r = 10;	//标记点作用半径
int x[MAX_N + 10] = { 70 ,30, 1, 7 ,15, 20, 50 };//点的横坐标数组

void solve() {
	sort(x, x + n);
	
	int i = 0;	//处理到第几个点了
	int ans = 0;//至少需要的标记点数,本题输出结果
	while (i < n) {
		int leftest =x[i] ;
		while (i < n  &&  leftest + r >= x[i + 1])
			i++;
		int p = x[i];
		ans++;

		//printf("%d\n", p);

		while ( i<n  &&  p + r>=x[i + 1])
			i++;
		i++;//使i为 未在范围内的最左点
		
	}
	printf("%d\n", ans);
	
}
void input(){
}
int main()
{
	input();
	solve();
    return 0;
}

