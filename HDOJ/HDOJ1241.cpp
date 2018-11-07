//DFS
//矩阵m[a][b],不需要一个个m[i][j]写入,可以用scanf("%s",m[a])一次性写入m[i]
#include<bits/stdc++.h>
using namespace std;
int m;//行
int n;//列

char mn[102][102];
bool isInSet(int x, int y) {
	return (x < m&&x >= 0) && (y < n&&y >= 0);
}
void dfs(int a, int b) {
	mn[a][b] = '*';

	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int x = a + i;
			int y = b + j;
			if ( isInSet(x, y)&&'@' == mn[x][y]) {//还要进行区域在界线内的判定,
				dfs(x, y);
			}
		}
	}
}
int main() {
	while (scanf("%d%d", &m, &n) == 2 && 0 != (m + n)) {
		for (int i = 0; i < m; i++) {
			scanf("%s", &mn[i]);
			//写入a[i],a[i+1],...可以用scanf的%s读入
			/*for (int j = 0; j < n; j++) {
			scanf("%c", &mn[i][j]);
			}*/
		}
		int ret = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if ('@' == mn[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}
