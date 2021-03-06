// P49 FenceRepair POJ3253.cpp: 定义控制台应用程序的入口点。
//
//因输入并非该算法的重点,故数据输入步骤省略了,直接在初始化变量时赋值了.

#include "stdafx.h"
typedef long long ll;
const int MAX_N = 20000;
int n = 3;//木板分段 总段数
int length[MAX_N + 10] = { 8,5,8 };//各木板分段的 长度

void swap(int first, int second) {
	int temp = length[first];//临时变量,存储first的值,以便赋给second
	length[first] = length[second];
	length[second] = temp;
}

void solve() {
	ll ans = 0;

	while (n > 1) {
		//"将两板拼合"之前的代码都是排序,为什么书上这个排序算法写的这么麻烦...
		int min1 = 0;//将指向最短板
		int min2 = 1;//将指向次短板
		if (length[min1 > min2]) swap(min1, min2);

		for (int i = 2; i < n; i++) {
			if (length[i] < length[min1]) {
				min2 = min1;
				min1 = i;
			}
			else if (length[i] < length[min2]) {
				min2 = i;
			}
		}
		//将两板合并
		int t = length[min1] + length[min2];
		ans += t;
		//length[min1] = t;//这句话写在了接下来的代码,算是集中处理合并后的情况吧

		length[min1] = t;
		length[min2] = length[n - 1];	
			//次小的板下次就不用了,因为已经合并到了length[min1]中.
			//下一步会执行n--,所以原来的length[n-1]的空间将不再涉足,
			//这里面的值已转移到length[min2]
		n--;

	}

	printf("%d\n", ans);
}

int main()
{
	solve();
	return 0;
}

