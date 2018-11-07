//举例(从后往前举例)辅助思考: 2(x+1), x, ... 10, 4, 1
//发现递推关系: table[i] = 2 * (table[i - 1] + 1);
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int table[35];
	table[1] = 1;
	for (int i = 2; i < 30; i++) {
		table[i] = 2 * (table[i - 1] + 1);
		//printf("%d ",table[i]);
	}
	int n;
	while (scanf("%d", &n) == 1 && 30 >= n && n > 0) {
		printf("%d\n", table[n]);
	}
	return 0;
}
