#include<bits/stdc++.h>
using namespace std;
const int base = 2;//ת��Ϊbase����
int main() {
	int n;
	int ret[10000];
	while (scanf("%d", &n) != EOF) {
		int idx = 0;
		while (n) {
			ret[idx++] = n % base;
			n /= base;
		}
		while (idx--) {
			printf("%d", ret[idx]);
		}
		printf("\n");
	}
	return 0;
}
