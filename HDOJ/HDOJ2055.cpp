//1.使用scanf()的%c读入时, 注意之前有没有回车读进来, 有则需要用getchar()读掉
//2.scanf读入字符总结: http://acm.hdu.edu.cn/discuss/problem/post/reply.php?postid=8245&messageid=3&deep=1
//		%s会读入可见字符，无视回车、换行、空格，%c会读入任何一个字符。
//		%d读入n之后跟着一个换行符，%c读入会读入那个换行符，读不进来字符
//		%s读入会跳过那个换行符，读入你想要的那个可见字母，不管空格。
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
