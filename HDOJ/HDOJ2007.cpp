#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int start, end;
	while (scanf("%d%d", &start, &end) != EOF)
	{
		if (start > end) {
			int temp = start;
			start = end;
			end = temp;
		}
		long long oddRet = 0;//ÆæÊý
		long long evenRet = 0;
		for (int i = start; i <= end; i++) {
			if (1 == i % 2) {
				oddRet += pow(i, 3);
			}
			else {
				evenRet += pow(i, 2);
			}
		}
		printf("%ld %ld\n", evenRet, oddRet);
	}
	return 0;
}
