#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];      m., . m/
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int row = 0, column = 0;
	while (scanf("%d%d", &row, &column) != EOF) {
		for (int i_row = 1; i_row <= row; i_row++) {
			for (int j_col = 1; j_col <= column; j_col++) {
				scanf("%d", &a[i_row][j_col]);
			}
		}
		int maxAbs = a[1][1];
		int maxAbs_row = 1;
		int maxAbs_column = 1;
		for (int i_row = row; i_row > 0; i_row--) {
			for (int j_col = column; j_col > 0; j_col--) {
				if (abs(maxAbs) <= abs(a[i_row][j_col])) {
					maxAbs = a[i_row][j_col];
					maxAbs_row = i_row;
					maxAbs_column = j_col;
				}
			}
		}
		printf("%d %d %d\n", maxAbs_row, maxAbs_column, maxAbs);
	}
	return 0;
}
