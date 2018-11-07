//µ›Õ∆∫√…Ò∆Ê
//dp[n]=(dp[n-1]-1)*2;
#include<bits/stdc++.h>
using namespace std;
int dp[35];
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	dp[1] = 4;
	for (int i = 2; i < 31; i++) {
		dp[i] = (dp[i - 1] - 1) * 2;
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			int a;
			scanf("%d", &a);
			printf("%d\n", dp[a]);
		}
	}
	return 0;
}
