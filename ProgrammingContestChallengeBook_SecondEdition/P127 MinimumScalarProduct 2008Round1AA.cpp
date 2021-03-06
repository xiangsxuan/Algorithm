// P127 MinimumScalarProduct 2008Round1AA.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
#define ll long long
const int MAX = 100000;

int n=3;
int v1[MAX] = {1,3,-5};
int v2[MAX] = {-2,4,1};
void solve() {
	sort(v1, v1 + n);
	sort(v2, v2 + n);
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (ll)v1[i] * v2[n - 1 - i];
		//      ↑ 注意这里一定要先转换成long long
	}
	printf("%lld\n", ans);
}

int main()
{
	solve();
	return 0;
}

