//1.�ҵ��ƹ�ʽ�ľ���:����򵥵�����Ƽ��������ҵ�˼·��
//2.dp[i]Ϊ���i����Ԫ��·����(��һ��ʼ������:dp[i]�����1��i���߷�,Ȼ����a��b������dp[b]-dp[a].����һ��������)
//3.���ݷ�Χ�и�С��,��longlong�洢,printf��I64d��ʽ���
#include<bits/stdc++.h>
using namespace std;
long long dp[55];
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//����,����򵥵�����Ƽ��������ҵ�˼·��
	//dp[i]Ϊ���i����Ԫ��·����(��һ��ʼ������:dp[i]�����1��i���߷�,Ȼ����a��b������dp[b]-dp[a].����һ��������)
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = dp[2] + dp[1];//2
	dp[4] = dp[3] + dp[2];//3
	for (int i = 5; i < 55; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%I64d\n", dp[b - a]);
	}
	return 0;
}
