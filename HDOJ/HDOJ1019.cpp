//sum*a/gcd(sum,a)易溢出,sum/gcd(sum,a)*a则不容易溢出
//先做除法,再做乘法不易溢出,以后要记住这个小技巧

//a,b的最小公倍数等于 a,b的乘积除以a,b的最大公约数
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
