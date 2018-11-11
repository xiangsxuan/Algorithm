//二分最大匹配算法_匈牙利算法
//全局变量需复原,一开始忘了复原了
#include<bits/stdc++.h>
using namespace std;
int line[501][501];
int paired[501];//i人匹配对象是paired[i]
int usedTag[501];
int kase;
bool dfsPair(int p1) {
	for (int i = 0; i < kase; i++) {
		if (line[p1][i] != 0 && usedTag[i] == 0) {//存在边且没有使用过
			usedTag[i] = 1;//使用过了
			if (paired[i] == 0 || dfsPair(paired[i])) {//已经和别人好上了的话,让别人换一个(换一个就是递归了)
				paired[i] = p1;
				return true;//给别人换成功了就说明这条路可以,返回true,没换成功就不反悔true了
			}
		}
	}
	return false;
}
int main() {
	while (scanf("%d", &kase) != EOF) {
		memset(line, 0, sizeof(line));
		memset(paired, 0, sizeof(paired));//全局变量需复原,一开始忘了复原了
		int p1, p2, num;
		for (int i = 0; i < kase; i++) {
			scanf("%d: (%d)", &p1, &num);
			//printf("p1=%d num=%d\n", p1, num);
			while (num--) {
				scanf("%d", &p2);
				line[p1][p2] = 1;
				//printf("p2=%d ", p2);
			}
			//printf("\n");
		}
		int pairSum = 0;
		for (int i = 0; i < kase; i++) {
			memset(usedTag, 0, sizeof(usedTag));//全局变量需复原,一开始忘了复原了
			if (dfsPair(i)) pairSum++;
		}
		printf("%d\n", kase - pairSum / 2);
	}
	return 0;
}