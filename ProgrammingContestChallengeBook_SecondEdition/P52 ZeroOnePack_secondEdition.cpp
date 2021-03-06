// P52 ZeroOnePack_secondEdition.cpp: 定义控制台应用程序的入口点。
//
//因输入并非该算法的重点,故数据输入步骤省略了,直接在初始化变量时赋值了.

#include "stdafx.h"
#include<algorithm>
#include<memory.h>
using namespace std;
const int MAX_N = 100;
const int MAX_W = 10000;

int n = 4;//物品个数
int w = 5;//背包承重重量
int weight[MAX_N + 10] = { 2,1,3,2 };	//单个物品重量,配合value数组使用
int value[MAX_N + 10] = { 3,2,4,2 };	//单个物品价值,配合weight数组使用
int dpMemory[MAX_N + 10][MAX_N + 10];	//记忆数组,存储递归中已经算过的函数调用

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

	
	if (dpMemory[index][leftWeigh] > 0) {
		//已保存在记忆数组中的
		return dpMemory[index][leftWeigh];
	}

	//未保存在记忆数组中时,才会执行下面
	//我的思考:if的分支判断中,应该把分支得到概率最高的放在前面,这样可以减少无用判断
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

	dpMemory[index][leftWeigh] = resultValue;
	return resultValue;
}

int main()
{
	memset(dpMemory,-1,sizeof(dpMemory));//这里对memset函数我还不是很了解,不知道这里用错没有
	printf("%d\n", solve(0, w));
	return 0;
}