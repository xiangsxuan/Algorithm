#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int num;
	int a[1000];
	while (scanf("%d", &num) != EOF && num) {
		int minNum;
		int minPos = 0;
		scanf("%d", &a[0]);
		minNum = a[0];
		for (int i = 1; i < num; i++) {
			scanf("%d", &a[i]);
			if (a[i] < minNum) {
				minNum = a[i];
				minPos = i;
			}
		}
		
		int temp = a[0];
		a[0] = a[minPos];
		a[minPos] = temp;
		
		int blankFlag = 0;
		for (int i = 0; i < num; i++) {
			if (blankFlag++) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
