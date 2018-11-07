//方法1:本质是看循环节出现时,循环字符的长度是否到指定长度了
//方法2:看他们是不是互质,这个方法我暂时没搞懂为什么
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
