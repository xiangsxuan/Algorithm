//ע��scanf��%c��ʽ ��ѻ���Ҳ����һ���ַ�
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("out1.txt", "w", stdout);
	char c[5];
	while (scanf("%c%c%c%c", &c[0], &c[1], &c[2], &c[4]) != EOF)
	{
		sort(c, c + 3);
		printf("%c %c %c\n", c[0], c[1], c[2]);
	}
	return 0;
}
