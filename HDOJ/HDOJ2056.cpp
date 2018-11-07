//1.画图可以帮助理清思路
//2.一开始做这道题,抽象了好几个函数,其实会发现,小问题如果抽象太多反而会提高思维难度
#include<bits/stdc++.h>
using namespace std;
//使first为教小值
void makeRectStandard(double& first, double& second) {
	if (first > second) {
		swap(first, second);
	}
}
int main() {
	double x1, x2, x3, x4, y1, y2, y3, y4;
	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) != EOF) {
		//使正方形表示变成(左下顶点,右上顶点)
		makeRectStandard(x1, x2); makeRectStandard(y1, y2);
		makeRectStandard(x3, x4); makeRectStandard(y3, y4);

		double x5, x6, y5, y6;
		x5 = max(x1, x3); y5 = max(y1, y3);
		x6 = min(x2, x4); y6 = min(y2, y4);
		if (x5 < x6&&y5 < y6) {		//为啥这里用!(y2 < y3&&y1 < y3) || (y4 < y1&&y4 < y2)判断就wa呀..........
			printf("%.2lf\n", (x6 - x5)*(y6 - y5));
		}
		else {
			printf("0.00\n");
		}
	}
	return 0;
}