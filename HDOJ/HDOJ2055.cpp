//1.ʹ��scanf()��%c����ʱ, ע��֮ǰ��û�лس�������, ������Ҫ��getchar()����
//2.scanf�����ַ��ܽ�: http://acm.hdu.edu.cn/discuss/problem/post/reply.php?postid=8245&messageid=3&deep=1
//		%s�����ɼ��ַ������ӻس������С��ո�%c������κ�һ���ַ���
//		%d����n֮�����һ�����з���%c���������Ǹ����з������������ַ�
//		%s����������Ǹ����з�����������Ҫ���Ǹ��ɼ���ĸ�����ܿո�
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char x;
		int y;
		getchar();
		scanf("%c %d", &x, &y);
		if (x >= 'A'&&x <= 'Z') {
			printf("%d\n", int(x - 'A' + 1 + y));
		}
		else {
			printf("%d\n", int('a' - x - 1 + y));
		}
	}
	return 0;
}
