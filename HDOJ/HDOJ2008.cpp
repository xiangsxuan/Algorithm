//一开始把第8行的 && 写成了 &
#include<bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    while (scanf("%d", &n) != EOF && 0 != n)
    {
        int pNumRet = 0;//正数个数
        int nNumRet = 0;//负数个数
        int zeroRet = 0;//零个数
        double num;
        for (int i = 0; i < n; i++) {
            scanf("%lf", &num);
            if (num > 0) {
                ++pNumRet;
            }
            else if (num < 0) {
                ++nNumRet;
            }
            else {
                ++zeroRet;
            }
        }
        printf("%d %d %d\n", nNumRet, zeroRet, pNumRet);
    }
    return 0;
}
