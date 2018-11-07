#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	double a;
	while (scanf("%lf", &a) != EOF)
	{
		printf("%.2lf\n", a > 0 ? a : -a);
	}
	return 0;
}
