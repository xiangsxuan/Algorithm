#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	while (scanf("%d", &n) == 1 && 100 >= n && n > 2) {
		int maxN, minN, num;
		scanf("%d", &maxN);
		minN = maxN;
		double sum = maxN;
		for (int i = 1; i < n; i++) {
			scanf("%d", &num);
			sum += num;
			if (num > maxN)maxN = num;
			if (num < minN)minN = num;
		}
		printf("%.2lf\n", (sum - maxN - minN) / (n - 2));
	}
	return 0;
}
