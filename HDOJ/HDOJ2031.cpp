//3点收益:
//1,复杂表示用数组  
//2,字符数组初始化可以用字符串  
//3,进制转换的方法先模后除（忘了可以拿十进制2到二进制11转换现场推下）
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char a[17] = "0123456789ABCDEF";
	int n, r;
	while (scanf("%d%d", &n, &r) != EOF) {
		if (n < 0) {
			printf("-");
			n = -n;
		}
		int bit[100];
		int idx = 0;
		while (n) {
			bit[idx++] = a[n%r];
			n /= r;
		}
		while (idx--) { 
			printf("%c", bit[idx]); 
		}
		printf("\n");
	}
	return 0;
}


