// P39 coin.cpp: 定义控制台应用程序的入口点。
//
/*
尽可能用大面值凑,因为这样硬币才能最少(,当然,如果用了大面值后,剩余
要凑的面值,小面值的钱不能凑齐,这时,就要尝试将大面值钱数减1,看看能
不能,不能的话再继续减1,直到能凑齐为止. 不过这道题,小面值的n倍等于
任意更大面值,所以不存在此问题. 括号中的思考适用于:小面值和大面值
的关系中,存在至少一对为非公倍数关系)
*/

#include "stdafx.h"

const int V[6] = {1,5,10,50,100,500};

int c[6];//硬币个数: 面值为1的为c[0]个,为5的为c[1]个
int requestSum;//要求凑得的硬币总数

void input() {
	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &c[i]);
	}
	scanf_s("%d", &requestSum);
}

int min(int first, int second) {
	if (first < second) {
		return first;
	}
	else {
		return second;
	}
}

void solve() {
	int ans=0;//求得需要的总硬币数
	for (int i = 5; i >= 0; i--) {
		int t = min((requestSum / V[i]), c[i]);//i硬币个数
		requestSum -= t * V[i];
		ans += t;
	}
	printf("%d\n", ans);
}

int main()
{
	input();
	solve();
    return 0;
}

