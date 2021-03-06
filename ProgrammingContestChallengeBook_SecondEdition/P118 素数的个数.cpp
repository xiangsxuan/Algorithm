// P118 素数的个数.cpp: 定义控制台应用程序的入口点。
//

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

const int MAX_N=1001;
int prime[MAX_N];//第i个素数
bool is_prime[MAX_N + 1];//为true表示是素数

int main()
{
	int n = 1000;//求1000内的素数
	int p = 0;//素数个数,1000内有168个
	for (int i = 0; i <= n; i++) {
		is_prime[i] = true;
	}
	is_prime[0] = is_prime[1] =  false;//0和1是非素数,特殊处理,其他的数后面处理
	for (int i = 2; i <= n; i++) {
		//遇见的第一个最小的数肯定是素数,因为没有更小的给他除
		if (is_prime[i]) {
			prime[p++] = i;//保存素数
			for (int j = 2 * i; j <= n; j += i) {
				//素数的2,3,4...倍均不是素数
				is_prime[j] = false;
			}
		}
	}
	printf("%d\n",p);
    return 0;
}

