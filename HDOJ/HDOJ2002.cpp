//球体积计算公式:(4/3)πr^3
#include<bits/stdc++.h>
#define PI 3.1415927
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	double r;
	while (scanf("%lf", &r) != EOF)
	{
		double ret = r * r * r * (4.0 / 3.0) * PI;
		printf("%.3lf\n", ret);
	}
	return 0;
}
