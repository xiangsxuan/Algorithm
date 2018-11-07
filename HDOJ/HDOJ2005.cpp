//闰年2月29天: 判定闰年方法year%4==0&&year%100!=0||year%400==0
//输入处理: scanf("%d/%d/%d", &year, &month, &day) 比 scanf("%s", &date) 简单多了
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int days[15] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day;
	while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			days[2] = 29;
		}
		else {
			days[2] = 28;
		}

		int ret = 0;
		for (int i = 0; i < month; i++) {
			ret += days[i];
		}
		ret += day;
		printf("%d\n", ret);
	}
	return 0;
}
