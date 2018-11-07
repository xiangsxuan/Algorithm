//求234的十位,求法是 234/10%10 而不是 234/10
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int times = 0;
		for (int i = n; i <= m; i++) {
			int x = i / 100;
			int y = i / 10 % 10;
			int z = i % 10;
			if (pow(x, 3) + pow(y, 3) + pow(z, 3) == i) {
				if (times > 0) printf(" ");
				printf("%d", i);
				++times;
			}
		}
		if (0 == times) {
			printf("no");
		}
		printf("\n");
	}
	return 0;
}
