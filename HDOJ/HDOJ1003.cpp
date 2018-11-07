////思路一(超时):通过Sn-S1=a2+...an,把连续和转换成两个数的差
//#include<bits/stdc++.h>
//using namespace std;
//int a[100010];
//int s[100010];//s[i]为前i项的和
//
//int main() {
//	int testCase;
//	scanf("%d", &testCase);
//	int newLine = 0;
//	while (testCase--) {
//		memset(a, -1, sizeof(a));
//		memset(s, 0, sizeof(s));
//		int n;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &a[i]);
//		}
//
//		s[1] = a[1];
//		for (int i = 2; i <= n; i++) {
//			s[i] = s[i - 1] + a[i];
//		}
//
//		int maxSum = s[1];
//		int strIdx = 1;
//		int endIdx = 1;
//		for (int i = 0; i <= n; i++) {//s[i]代表:起始点为i+1
//			for (int j = i; j <= n; j++) {//末尾s[j]
//				if ((s[j] - s[i]) > maxSum) {
//					maxSum = s[j] - s[i];
//					strIdx = i + 1;
//					endIdx = j;
//				}
//			}
//		}
//		if (newLine++)printf("\n");
//		printf("Case %d:\n%d %d %d\n",newLine, maxSum, strIdx, endIdx);
//	}
//
//	return 0;
//}

//思路二:过一遍序列,把其中出现的断开的几段最大子序列sum计算出来,写好了这个
//			以后(一定要写好了再继续,这样分层考虑才是原本的思路,代码混在一起的非常乱,根本看不出思路)
//			,添加上一个最大值记录
#include<bits/stdc++.h>
using namespace std;
int a[100010] = { 0 };
int main() {
	int testCase;
	scanf("%d", &testCase);
	int kase = 0;
	while (testCase--) {
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {//从1记起
			scanf("%d", &a[i]);
		}

		int retStrIdx = 1;	//最大
		int retEndIdx = 1;	//最大
		int retSum = a[1];	//最大
		int tepStrIdx = 1;	//临时最大子序列起点
		int tepEndIdx = 0;	//临时最大子序列终点
		int tepSum = 0;		//临时最大子序列和
		//[j,n]
		for (int idx = 1; idx <= n; idx++) {
			if (tepSum + a[idx] >= a[idx]) {//这里必须包括等于,否则出错,啊!...找了半天这个错误
				tepSum += a[idx];
				tepEndIdx++;
			}
			else {
				tepSum = a[idx];
				tepStrIdx = idx;
				tepEndIdx = idx;
			}
			if (retSum < tepSum) {
				retSum = tepSum;
				retStrIdx = tepStrIdx;
				retEndIdx = tepEndIdx;
			}
		}

		if (kase++)printf("\n");
		printf("Case %d:\n%d %d %d\n", kase, retSum, retStrIdx, retEndIdx);
	}

	return 0;
}
