////˼·һ(��ʱ):ͨ��Sn-S1=a2+...an,��������ת�����������Ĳ�
//#include<bits/stdc++.h>
//using namespace std;
//int a[100010];
//int s[100010];//s[i]Ϊǰi��ĺ�
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
//		for (int i = 0; i <= n; i++) {//s[i]����:��ʼ��Ϊi+1
//			for (int j = i; j <= n; j++) {//ĩβs[j]
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

//˼·��:��һ������,�����г��ֵĶϿ��ļ������������sum�������,д�������
//			�Ժ�(һ��Ҫд�����ټ���,�����ֲ㿼�ǲ���ԭ����˼·,�������һ��ķǳ���,����������˼·)
//			,�����һ�����ֵ��¼
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
		for (int i = 1; i <= n; i++) {//��1����
			scanf("%d", &a[i]);
		}

		int retStrIdx = 1;	//���
		int retEndIdx = 1;	//���
		int retSum = a[1];	//���
		int tepStrIdx = 1;	//��ʱ������������
		int tepEndIdx = 0;	//��ʱ����������յ�
		int tepSum = 0;		//��ʱ��������к�
		//[j,n]
		for (int idx = 1; idx <= n; idx++) {
			if (tepSum + a[idx] >= a[idx]) {//��������������,�������,��!...���˰����������
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
