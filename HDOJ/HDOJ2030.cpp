#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char a[17] = "0123456789ABCDEF";
	int n, r;
	while (scanf("%d%d", &n, &r) != EOF) {
		if (n < 0) {
			printf("-");
			n = -n;
		}
		int bit[100];
		int idx = 0;
		while (n) {
			bit[idx++] = a[n%r];
			n /= r;
		}
		while (idx--)printf("%d", bit[idx]);
		printf("\n");
	}
	return 0;
}

