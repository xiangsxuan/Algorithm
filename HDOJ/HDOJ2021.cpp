//����Ϊʲô������̰�ĵ�ԭ��(�ܷ�����Ǯ�ͷ�����Ǯ),˼������
//���Ǯ����ֵ���ǣ�100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ
//            ���ǣ�100Ԫ��50Ԫ��10Ԫ��5Ԫ��4Ԫ��2Ԫ
//�ȷ�˵�뷢6Ԫ���ͻ��Ȱ�5Ԫѡ�ˣ����Ǻ���ȴ�ղ������Ǯ���ˣ��������1Ԫ�ܹؼ�
//�۲�ó�����ʵ��Ŀ������Ǯ��������[��Ǯ��ȫ��������СǮ�ճ���]
//          �����Ϊʲô������̰�ĵ�ԭ��
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int value[6] = { 100,50,10,5,2,1 };
	int n = 0;
	while (scanf("%d", &n) != EOF && n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int money = 0;
			scanf("%d", &money);
			for (int j = 0; j < 6; j++) {
				if (money / value[j] != 0) {
					int num = money / value[j];
					sum += num;
					money -= num * value[j];
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
