//µ›Õ∆∫√…Ò∆Ê
#include<bits/stdc++.h>
using namespace std;
int dp[50];
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 2;
	for (int i = 4; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			int m;
			scanf("%d",&m);
			printf("%d\n",dp[m]);
		}
	}
	return 0;
}
