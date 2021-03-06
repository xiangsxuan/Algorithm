// P44 BestCowLine POJ3617.cpp: 定义控制台应用程序的入口点。
//
/*
input:
6ACDBCB
注意,以下输入会失败,因为输入函数的处理规则:
6
ACDBCB

output:
ACDBCB
*/
#include "stdafx.h"
#define scanf scanf_s;
const int MAX_N=2000;
int n;			//字符串长度
char s[MAX_N+10];//保存字符串

//输入
void input() {

	scanf_s("%d", &n);//注意!这里如果输入enter,会把\n录入到下面的s字符数组里面!
	for (int i = 0; i < n; i++) {
		scanf_s("%c", &s[i]);
	}

}

//算法处理并输出
void solve() {
	int left=0, right=n-1;	//未处理的字符串为s[a]...s[b]
				//或者这里也可以想成处理过的地方的指针
	while (left <= right) {
		bool useLeft = false;

		for (int i = 0; left + i <= right; i++) {
			//如果情况为相等,那么继续下一层循环,直到 有不相等的/所有情况都比较过了
			if (s[left + i] < s[right - i]) {
				useLeft = true;
				break;
			}
			else if (s[left + i] > s[right - i]) {
				useLeft = false;
				break;
			}
		}

		if (useLeft) {
			putchar(s[left++]);
		}
		else {
			putchar(s[right--]);
		}
	}
	putchar('\n');

}
int main()
{
	input();
	solve();
	    return 0;
}

