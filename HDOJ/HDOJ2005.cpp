//����2��29��: �ж����귽��year%4==0&&year%100!=0||year%400==0
//���봦��: scanf("%d/%d/%d", &year, &month, &day) �� scanf("%s", &date) �򵥶���
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
