// P117 素数判定.cpp: 定义控制台应用程序的入口点。
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

bool is_prime(int n) { 
	for (int i = 2; i*i <= n; i++) {
		if (0 == n % i) {
			return false;
		}
	}
	//以上是从2开始验证的,1是例外单独判断
	return n != 1;
}

//公约数枚举
vector<int> divsor(int n) {
	vector<int> res;
	for (int i = 1; i*i < n; i++) {
		if (n%i == 0) {
			
			if (i != n / i) {
				res.push_back(n/i);
			}
		}
	}
}

int main()
{
	//略
    return 0;
}

