//����1:�����ǿ�ѭ���ڳ���ʱ,ѭ���ַ��ĳ����Ƿ�ָ��������
//����2:�������ǲ��ǻ���,�����������ʱû�㶮Ϊʲô
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int seed = 0;
	int step, mod;
	int i;
	while (scanf("%d%d", &step, &mod) == 2) {
		seed = 0;
		for (i = 0; i < mod; i++) {
			seed = (seed + step) % mod;
			if (0 == seed) {
				break;
			}
		}
		printf("%10d%10d    %s\n\n", step, mod, (i == mod - 1 ? "Good Choice" : "Bad Choice"));
	}
	return 0;
}
