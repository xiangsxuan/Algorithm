//sum*a/gcd(sum,a)�����,sum/gcd(sum,a)*a���������
//��������,�����˷��������,�Ժ�Ҫ��ס���С����

//a,b����С���������� a,b�ĳ˻�����a,b�����Լ��
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
	return 0==b?a:gcd(b, a%b);
}
int main()
{
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int ret=1;
		int n;
		scanf("%d", &n);
		int number;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &number);			
			ret = number/gcd(number,ret)*ret;
		}
		printf("%d\n", ret);
	}
	return 0;
}
