//����ʹ��ǰһ��Ҫ�ǵ����Ԫ��
//������Ԫ��ʱ��Ҫ��˫0����0���������Ҫ�뵱Ȼ����n&&m���жϽ�������
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, m;
	int a, b;
	set<int> ret;
	while (scanf("%d%d", &n, &m) != EOF && (n + m)) { //n��m��һ��Ϊ�ռ�ʱ������Ҫ��������ȥ
		ret.clear();//����ʹ��ǰһ��Ҫ�ǵ����Ԫ��
		for (int i = 0; i < n; i++) {
			scanf("%d", &a);
			ret.insert(a);
		}
		for (int i = 0; i < m; i++) {
			scanf("%d", &b);
			if (ret.count(b))ret.erase(b);
		}
		if (ret.size() != 0) {
			for (set<int>::iterator iter = ret.begin(); iter != ret.end(); iter++) {
				printf("%d ", *iter);
			}
		}
		else {
			printf("NULL");
		}
		printf("\n");
	}
	return 0;
}
