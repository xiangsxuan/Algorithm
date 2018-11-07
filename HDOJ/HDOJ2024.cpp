//需要知道gets()和scanf()的区别
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char ch[55], c;
	int n = 0;
	scanf("%d", &n) != EOF;
	getchar();
	for (int i = 0; i < n; i++) {
		bool tag = false;
		gets(ch);//HDOJ不支持gets_s()
		if (isalpha(ch[0]) || ch[0] == '_') {
			tag = true;
			for (int j = 1; j < strlen(ch); j++) {
				if (!isdigit(ch[j])&&!isalpha(ch[j]) && ch[j] != '_') {
					tag = false;
					break;
				}
			}
		}
		if (tag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
