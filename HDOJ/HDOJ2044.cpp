//1.找递推公式的经验:从最简单的情况推几个就能找到思路了
//2.dp[i]为间隔i个单元的路线数(我一开始考虑是:dp[i]代表从1到i的走法,然后求a到b就是用dp[b]-dp[a].绕了一个大弯子)
//3.数据范围有个小坑,用longlong存储,printf的I64d格式输出
#include<bits/stdc++.h>
using namespace std;
long long dp[55];
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//如下,从最简单的情况推几个就能找到思路了
	//dp[i]为间隔i个单元的路线数(我一开始考虑是:dp[i]代表从1到i的走法,然后求a到b就是用dp[b]-dp[a].绕了一个大弯子)
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = dp[2] + dp[1];//2
	dp[4] = dp[3] + dp[2];//3
	for (int i = 5; i < 55; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%I64d\n", dp[b - a]);
	}
	return 0;
}
