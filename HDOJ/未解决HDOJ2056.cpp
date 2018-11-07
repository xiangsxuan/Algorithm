//画出几种图形来看一下,可以发现如果相交部分为:
//					左下角的两顶点中的较大点（x,y都为大值）到右下角的两顶点中的较大点（x,y都为小值）
#include<bits/stdc++.h>
using namespace std;
//使长方形点表示为:左下点,右上点
void change(double* x0, double* y0, double* x1, double* y1) {
	double tx0 = *x0, ty0 = *y0, tx1 = *x1, ty1 = *y1;
	*x0 = min(tx1, tx0);
	*y0 = min(ty1, ty0);
	*x1 = max(tx1, tx0);
	*y1 = max(ty1, ty0);
}

int main() {
	double x[5], y[5];
	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]) != EOF) {
		//把点表示转换为都表示左下右上
		change(&x[1], &y[1], &x[2], &y[2]);
		change(&x[3], &y[3], &x[4], &y[4]);

		if (x[2] < x[3] && y[2] < y[3]) {
			printf("0.00\n");
		}
		else {
			//相交矩形的左下点 右上点分别是:(maxX,maxY)到(minX,minY)
			double maxX = max(x[1], x[3]);
			double maxY = max(y[1], y[3]);
			double minX = min(x[2], x[4]);
			double minY = min(y[2], y[4]);
			//printf("%lf\n%lf\n%lf\n%lf\n", maxX, maxY, minX, minY);
			printf("%.2lf\n", abs(maxX - minX)* abs(maxY - minY));
		}
	}
	return 1;
}