#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	while (scanf("%d", &n) != EOF && n > 0)
	{
		long long ret = 1;
		int num;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num);
			if (num % 2 == 1) {
				ret *= num;
			}
		}
		printf("%ld\n", ret);
	}
	return 0;
}
