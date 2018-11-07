//定义变量时要考虑它的作用域,不要让它影响到下次的结果
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int flag = 0;//如果放在while外面就错了,定义变量时要考虑它的作用域,不要让它影响到下次的结果
		for (int i = 1; i <= n; i++) {
			if (0 == n % i) {
				flag = 1 - flag;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}
