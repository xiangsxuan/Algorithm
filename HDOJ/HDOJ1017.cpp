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
			for (int i = 1; i <n-1; i++) {//ע������ ��С����ൽn-2,�ϴ�����n-1
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
