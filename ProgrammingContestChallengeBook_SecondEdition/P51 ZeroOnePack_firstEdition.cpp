// P51 ZeroOnePack_firstEdition.cpp: 定义控制台应用程序的入口点。
//
//因输入并非该算法的重点,故数据输入步骤省略了,直接在初始化变量时赋值了.
/*自己写的版本:

#include "stdafx.h"
#include <bits/stdc++.h>
using namespace std;
int n = 4;//个数
int W = 5;//总承重
int w[100] = { 2,1,3,2 };//重量
int v[100] = { 3,2,4,2 };//价值
int mem[100][10000];
//参数: idx物品个数 weight为总承重
//返回值: 装包的物品总价值
int rec(int idx, int weight) {
if (idx < 0) {
return 0;
}else if (weight < 0) {
return -10000;//这里用-1000是我自己写的,并不是书上的想法,这里我也没想清这个数字应定成多少
}else if(mem[idx][weight]>0){
printf("used\n");
return mem[idx][weight];
}
return mem[idx][weight]=max(rec(idx - 1, weight), rec(idx - 1, weight - w[idx - 1]) + v[idx - 1]);
}

int main() {
memset(mem, -1, sizeof(mem));
printf("%d\n", rec(n, W));
return 0;
}

*/
#include "stdafx.h"
#include<algorithm>
using namespace std;
const int MAX_N = 100;
int n = 4;//物品个数
int w = 5;//背包承重重量
int weight[MAX_N] = { 2,1,3,2 };//单个物品重量,配合value数组使用
int value[MAX_N] = { 3,2,4,2 };//单个物品价值,配合weight数组使用

int max(int first, int second) {
	if (first > second) {
		return first;
	}
	else {
		return second;
	}
}

//从第index个物品开始挑选,重量小于left的部分
int solve(int index, int leftWeigh) {
	int resultValue;
	if (n == index) {
		//终结条件
		resultValue = 0;
	}
	else if (leftWeigh < weight[index]) {
		//这步的操作内容其实在下一个else中都会做,提前加一个判断以把超重的排除
		resultValue = solve(index + 1, leftWeigh);
	}
	else {
		//挑选和不挑选两种情况
		resultValue = max(solve(index + 1, leftWeigh), solve(index + 1, leftWeigh - weight[index]) + value[index]);
	}
	return resultValue;
}

int main()
{

	printf("%d\n", solve(0, w));
	return 0;
}

