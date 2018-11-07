#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	double n;
	int m;
	while (scanf("%lf%d", &n, &m) != EOF)
	{
		double ret = 0.0;
		for (int i = 0; i < m; i++) {
			ret += n;
			n = sqrt(n);
		}
		printf("%.2lf\n", ret);
	}
	return 0;
}
