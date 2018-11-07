#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a = 0, b = 0;
	while (scanf("%d%d", &a, &b) != EOF && (a&&b)) {
		int ret = 1;
		if (0 == b) {
			printf("1\n");
		}
		else if (0 == a) {
			printf("0\n");
		}
		else {
			for (int i = 0; i < b; i++) {
				ret = ret * a;
				ret = ret % 1000;
			}
			printf("%d\n", ret);
		}
	}
	return 0;
}
