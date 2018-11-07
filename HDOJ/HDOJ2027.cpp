#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char str[105];
	const char a[5] = { 'a','e','i','o','u' };
	int newLineTag = 0;
	int n = 0;
	scanf("%d", &n);
	getchar();//scanf()后买如果用gets()一定要记住用getchar读掉一个输入
	while (n--) {
		while (gets(str)) {
			int sum[5] = { 0,0,0,0,0 };
			for (int i = 0; i < strlen(str); i++) {
				for (int j = 0; j < 5; j++) {
					if (str[i] == a[j]) {
						sum[j]++;
					}
				}
			}
			if (newLineTag++)printf("\n");
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", sum[0], sum[1],
				sum[2], sum[3], sum[4]);
		}
	}
	return 0;
}
