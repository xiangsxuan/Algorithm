//数字小保存在int或double或longlong, 
//数字很大时, 保存在字符串
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    scanf("%d", &testCase);
    while (testCase--) {
        double ret=0.0;
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            ret += log10(i);
        }
        printf("%d\n", (int)(ret + 1));
    }
    return 0;
}
