//��Ȼͨ����,����49������-858993460,��Ӧ���Ǵ�Ĵ𰸰�,�ǲ�������̫����ô?
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a[50];
	a[1] = 1;
	a[2] = 1;
	long long A, B, n;
	while (scanf("%d%d%d", &A, &B, &n) == 3 && (A + B + n)) {
		for (int i = 3; i <= 49; i++) {
			a[i] = (A*a[i - 1] + B * a[i - 2]) % 7;
		}
		printf("%d\n", a[n % 49]);
	}
	
	return 0;
}
