#include<bits/stdc++.h>
using namespace std;
double next_n(int n, double n_front) {//要求第n项的值,n_front 1/(n-1)! 的值
	return ((double)1 / (double)n )*(n_front);
}
int main()
{
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n1 2\n2 2.5\n");
	double sum_e = 1.0+1.0 + 1.0 / (2 * 1);	//n为ret,初始为n=2得到的e值
	double last_n = 1.0 / (2 * 1);		// 1/(n-1)! 的值
	for (int i = 3; i <= 9; i++) {
		double t_last_n= next_n(i, last_n);
		sum_e = sum_e + t_last_n;
		last_n = t_last_n;
		printf("%d %.9llf\n", i, sum_e);
	}
	return 0;
}
