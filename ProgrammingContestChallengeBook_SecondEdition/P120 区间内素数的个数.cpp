#include "stdafx.h"
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef long long ll;
const int MAX_N = 1000007;
const int MAX_L = 1000007;
bool is_prime[MAX_L];//标记a到b内的素数
bool is_prime_small[MAX_N];//标记2到 根号b 内的素数
int main()
{
	ll a = 22801763489;
	long long  b = 22801787297;
	//全初始标记为素数
	for (int i = 0; (ll)i*i < b; i++) {
		is_prime_small[i] = true;
	}
	for (int i = 0; i < b - a; i++) {
		is_prime[i] = true;
	}

	for (int i = 2; (ll)i*i < b; i++) {
		if (is_prime_small[i]) {
			for (int j = 2 * i; (ll)j*j < b; j += i) {
				is_prime_small[j] = false;
			}
			for (ll j = ((a + i - 1) / i * i); j < b; j += i) {
				// 这里j要用long long声明!!!找了半天错误!每次用到了不常用的类型比较时,就要多考虑下!
				// (a + i - 1)*i / i  为[a,b)内,第一个i的公倍数
				is_prime[j - a] = false;
			}
		}
	}
	long long res = 0;
	for (int i = 0; (ll)i <= b - a; i++) {
		if (is_prime[i]) {
			//printf("%d\n", i);
			res++;
		}
	}
	if (1 == a) {
		res--;
	}
	printf("%d\n", res);
	return 0;
}

