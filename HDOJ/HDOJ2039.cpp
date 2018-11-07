#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	double a, b, c;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%lf%lf%lf", &a, &b, &c);
			if (a + b > c&&a + c > b&&b + c > a) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	return 0;
}
