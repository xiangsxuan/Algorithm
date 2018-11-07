//1.注意：选择排序每一趟不需要交换n个变量
//2.思考问题时应该先思考分析下, 有几种方法, 每种方法怎么解决比较好, 然后选一个最优的。 
//  这道题里, 我们先想到要用贪心法, 也就是求最早结束的满足条件的, 
//  这时候我们就该想到可以排序的, 而我就比较鲁莽, 也没有想先排序, 
//  每一次都进行一次最早结束点的查找, 这样一下让复杂度涨了不少

#include<bits/stdc++.h>
using namespace std;
typedef struct show {
	int start;
	int end;
}show;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	show showTime[105];
	while (scanf("%d", &n) != EOF && n) {
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &showTime[i].start, &showTime[i].end);
		}
		////我写的低效选择排序
		//for (int i = 0; i < n - 1; i++) {
		//	for (int j = i + 1; j < n; j++) {
		//		if (showTime[i].end > showTime[j].end) {
		//			show tempShow = showTime[i];
		//			showTime[i] = showTime[j];
		//			showTime[j] = tempShow;
		//		}
		//	}
		//}
		//更高效的选择排序（用一个标记变量减少无效频繁赋值）
		for (int i = 0; i < n - 1; i++) {
			int minIdx = i;
			for (int j = i + 1; j < n; j++) {
				if (showTime[minIdx].end > showTime[j].end) {
					minIdx = j;
				}
			}
			show tempShow = showTime[i];
			showTime[i] = showTime[minIdx];
			showTime[minIdx] = tempShow;
		}
		/*for (int i = 0; i < n; i++) {
			printf("排序后i节目：%2d %2d %2d\n", i, showTime[i].start, showTime[i].end);
		}*/
		int ret = 0;
		int timeNow = 0;//计算到了哪个时间点
		for (int i = 0; i < n; i++) {
			if (showTime[i].start >= timeNow) {
				timeNow = showTime[i].end;
				ret++;
				//printf("看了%d节目\n", i);
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}
