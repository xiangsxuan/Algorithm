#include<bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int  m;
    while (scanf("%d", &m) != EOF)
    {
        for (int i = 0; i < m; i++) {
            double ret = 1.0;
            int n;
            scanf("%d", &n);
            int sign = -1;
            for (int j = 2; j <= n; j++) {
                double num = sign * (1.0 / j);
                ret += num;
                sign = -sign;
            }
            printf("%.2lf\n", ret);
        }
    }
    return 0;
}
