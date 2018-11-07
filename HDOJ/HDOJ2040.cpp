#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	while (scanf("%d", &n) != EOF) {
		int a, b;
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &a, &b);
			int sumA = 0, sumB = 0;
			for (int j = 1; j <= (a / 2); j++) {
				if (a%j == 0) {
					sumA += j;
				}
			}
			for (int j = 1; j <= (b / 2); j++) {
				if (b%j == 0) {
					sumB += j;
				}
			}
			if (sumA == b && sumB == a) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	return 0;
}
