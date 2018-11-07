#include<bits/stdc++.h>
using namespace std;
int main()
{
	int bigCase;
	scanf("%d", &bigCase);
	for (int i = 0; i < bigCase;i++) {
		int n, m;
		int kase = 1;
		while (scanf("%d%d", &n, &m) == 2 && n) {
			int ret = 0;
			for (int i = 1; i <n-1; i++) {//注意审题 较小数最多到n-2,较大数到n-1
				for (int j = i + 1; j < n; j++) {
					if (0 == ((i*i + j * j + m) % (i*j))) {
						ret++;
					}
				}
			}
			printf("Case %d: %d\n", kase++, ret);
		}
		if(i!=bigCase-1)printf("\n");
	}
	return 0;
}
