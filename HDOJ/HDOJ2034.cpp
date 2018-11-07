//容器使用前一定要记得清空元素
//有两个元素时，要分双0，单0的情况，不要想当然的用n&&m做判断结束条件
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, m;
	int a, b;
	set<int> ret;
	while (scanf("%d%d", &n, &m) != EOF && (n + m)) { //n或m仅一个为空集时，还是要继续做下去
		ret.clear();//容器使用前一定要记得清空元素
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
