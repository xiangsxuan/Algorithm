#include<bits/stdc++.h>
using namespace std;
char s[1000000];
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int num;
	while (scanf("%d", &num) != EOF && num) {
		for (int i = 0; i < num; i++) {
			int sum = 0;
			scanf("%s", &s);
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i] >= '0' && s[i] <= '9') sum++;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
