//开根号函数:sqrt()  求x的n次函数:pow(x,n)  
//一开始粗心把x1,y1,x2,y2看成了x1,x2,y1,y2 
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
