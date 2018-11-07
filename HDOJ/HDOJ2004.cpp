#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a;
	while (scanf("%d", &a) != EOF)
	{
		if (a > 100 || a < 0) {
			printf("Score is error!\n");
		}
		else if (a > 89) {
			printf("A\n");
		}
		else if (a > 79) {
			printf("B\n");
		}
		else if (a > 69) {
			printf("C\n");
		}
		else if (a > 59) {
			printf("D\n");
		}
		else if (a >= 0) {
			printf("E\n");
		}
	}
	return 0;
}
