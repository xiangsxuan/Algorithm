//�����ź���:sqrt()  ��x��n�κ���:pow(x,n)  
//һ��ʼ���İ�x1,y1,x2,y2������x1,x2,y1,y2 
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	double x1, x2, y1, y2;
	while (scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
	{
		double ret = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		printf("%.2lf\n", ret);
	}
	return 0;
}
