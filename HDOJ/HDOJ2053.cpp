//�������ʱҪ��������������,��Ҫ����Ӱ�쵽�´εĽ��
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int flag = 0;//�������while����ʹ���,�������ʱҪ��������������,��Ҫ����Ӱ�쵽�´εĽ��
		for (int i = 1; i <= n; i++) {
			if (0 == n % i) {
				flag = 1 - flag;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}
