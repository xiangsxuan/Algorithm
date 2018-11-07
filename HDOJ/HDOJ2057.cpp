// 1.库函数有很多功能,不知道的话就要自己造轮子了
/* 2.数据范围:
unsigned int		0～4294967295
int					- 2147483648～2147483647
unsigned long		0～4294967295
long				- 2147483648～2147483647
_int64				- 9223372036854775808~9223372036854775807
unsigned __int64：	18446744073709551615
long long			- 9223372036854775808~9223372036854775807
unsigned long long	1844674407370955161
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a, b;
	while (scanf("%llX%llX", &a, &b) != EOF) {
		long long ret = a + b;
		if (ret >= 0) {//这里不要忘了=号
			printf("%llX\n", ret);
		}
		else {
			printf("-%llX\n", -ret);
		}
	}
	return 0;
}