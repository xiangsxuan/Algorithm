//1.画实际图,模拟实际过程,推出递推公式为dp[i][j]=dp[i][j-1]+dp[i-1][j],i<=j
//2.实际录入了一下1,2,3,32,33,34,35,36发现到36后会溢出,恰好不用大整数
#include<bits/stdc++.h>
using namespace std;
long long dp[40][40];
void init() {
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < 36; i++) {
		for (int j = i; j < 36; j++) {//j从i开始遍历,只看上/下三角形
			if (i == 0 || j == 0) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}
	}
}
int main() {
	init();
	int n;
	int number = 1;
	while (scanf("%d", &n) && (-1 != n)) {
		printf("%d %d %lld\n", number++, n, 2 * dp[n][n]);
	}
	return 0;
}