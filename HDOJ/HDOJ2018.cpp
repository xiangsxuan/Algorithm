//����˼·:
//1.�о�����,���ݹ�����ϵʵ�ʹ���(���ߵߵ�����,���˼�����̲��ǹ̶���),
//  ֪����i�����Ŀ�� ��һ��� �� 3��ǰ��(��Ϊ3����4���������,����3�������ж���������),
//  ˼�����Ƶ������ƹ�ʽ:i�����Ϊa[i]=a[i-1]+a[i-3]
//2.ֱ��ģ��,����
#include<bits/stdc++.h>
using namespace std;
void grow(vector<int>& sum) {
	for (int i = 0; i < sum.size(); i++) {
		sum[i]++;
	}
}
void breed(vector<int>& sum) {
	for (int i = 0; i < sum.size(); i++) {
		if (sum[i] > 3) sum.push_back(1);
	}
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int num;
	while (scanf("%d", &num) != EOF && num) {
		vector<int> sum = { 4 };//��ʼ��Ϊ4��ԭ��,��4��ţ�Ż�grow
		for (int i = 1; i < num; i++) {
			grow(sum);
			breed(sum);
		}
		printf("%d\n", sum.size());
	}
	return 0;
}
