//递推如此简美~~
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int triangle[35][35] = { 0 };
	triangle[1][1] = 1;
	for (int i = 2; i <= 33; i++) {
		for (int j = 1; j <= i; j++) {
			triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
		}
	}
	int n;
	int newLineTag = 0;
	while (scanf("%d", &n) != EOF) {
		for (int i = 1; i <= n; i++) {
			int blankTag = 0;
			for (int j = 1; j <= i; j++) {
				if (blankTag++)printf(" ");
				printf("%d", triangle[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
