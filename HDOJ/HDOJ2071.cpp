#include<bits/stdc++.h>
using namespace std;
int main() {
	int kase;
	int n;
	double height, tHeight;
	scanf("%d", &kase);
	while (kase--) {
		scanf("%d", &n);
		scanf("%lf", &height);
		while (n > 1) {
			scanf("%lf", &tHeight);
			if (height < tHeight) {
				height = tHeight;
			}
			n--;
		}
		printf("%.2lf\n", height);
	}
	return 0;
}