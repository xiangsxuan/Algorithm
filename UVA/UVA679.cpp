//����������ϵ,ֱ��ģ�����һ����������
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("out.txt", "w", stdout);
	//memset(ballTree, false, sizeof(ballTree));//ÿһ�����Ӷ���Ҫ��ʼ��,д������ֻ���ʼ��һ��
	int kase;
	scanf("%d", &kase);
	int D, I;//depthΪD ,IΪ��������� 
	while (kase--) {
		scanf("%d%d", &D, &I);
		int maxI = (1 << D) - 1;
		int k = 1;
		for (int i = 0; i < D - 1; i++)
		{
			if (0 == I % 2) {
				k = k * 2 + 1;
				I = I / 2;
			}
			else {
				k = k * 2;
				I = (I + 1) / 2;
			}
		}
		printf("%d\n", k);
	}
	return 0;
}
//ֱ������ģ��,��ʱ
//#include<bits/stdc++.h>
//using namespace std;
//const int maxd = 20;
//bool ballTree[(1 << maxd) + 5];//true���� 
//int main() {
//	//memset(ballTree, false, sizeof(ballTree));//ÿһ�����Ӷ���Ҫ��ʼ��,д������ֻ���ʼ��һ��
//	int kase;
//	scanf("%d", &kase);
//	int D, I;//depthΪD ,IΪ��������� 
//	while (kase--) {
//		memset(ballTree, false, sizeof(ballTree));//ÿһ�����Ӷ���Ҫ��ʼ��
//		scanf("%d%d", &D, &I);
//		int maxI = (1 << D) - 1;
//		int k;
//		for (int i = 0; i < I; i++)
//		{
//			k = 1;
//			while (true) {
//				ballTree[k] = !ballTree[k];
//				k = (ballTree[k] ? k * 2 : k * 2 + 1);
//				if (k > maxI) break;
//			}
//		}
//		printf("%d", k / 2);
//		if (kase) printf("\n");
//	}
//	return 0;
//}
