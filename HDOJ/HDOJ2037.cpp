//1.ע�⣺ѡ������ÿһ�˲���Ҫ����n������
//2.˼������ʱӦ����˼��������, �м��ַ���, ÿ�ַ�����ô����ȽϺ�, Ȼ��ѡһ�����ŵġ� 
//  �������, �������뵽Ҫ��̰�ķ�, Ҳ�������������������������, 
//  ��ʱ�����Ǿ͸��뵽���������, ���ҾͱȽ�³ç, Ҳû����������, 
//  ÿһ�ζ�����һ�����������Ĳ���, ����һ���ø��Ӷ����˲���

#include<bits/stdc++.h>
using namespace std;
typedef struct show {
	int start;
	int end;
}show;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	show showTime[105];
	while (scanf("%d", &n) != EOF && n) {
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &showTime[i].start, &showTime[i].end);
		}
		////��д�ĵ�Чѡ������
		//for (int i = 0; i < n - 1; i++) {
		//	for (int j = i + 1; j < n; j++) {
		//		if (showTime[i].end > showTime[j].end) {
		//			show tempShow = showTime[i];
		//			showTime[i] = showTime[j];
		//			showTime[j] = tempShow;
		//		}
		//	}
		//}
		//����Ч��ѡ��������һ����Ǳ���������ЧƵ����ֵ��
		for (int i = 0; i < n - 1; i++) {
			int minIdx = i;
			for (int j = i + 1; j < n; j++) {
				if (showTime[minIdx].end > showTime[j].end) {
					minIdx = j;
				}
			}
			show tempShow = showTime[i];
			showTime[i] = showTime[minIdx];
			showTime[minIdx] = tempShow;
		}
		/*for (int i = 0; i < n; i++) {
			printf("�����i��Ŀ��%2d %2d %2d\n", i, showTime[i].start, showTime[i].end);
		}*/
		int ret = 0;
		int timeNow = 0;//���㵽���ĸ�ʱ���
		for (int i = 0; i < n; i++) {
			if (showTime[i].start >= timeNow) {
				timeNow = showTime[i].end;
				ret++;
				//printf("����%d��Ŀ\n", i);
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}
