//冒泡排序,注意: n个数,外层循环只比较到n-1次,内层循环比较到第n个数
#include<bits/stdc++.h>
using namespace std;
int a[105];
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    while (scanf("%d", &n) != EOF && n) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(a[j]) > abs(a[i])) {
                    int transfer;
                    transfer = a[i];
                    a[i] = a[j];
                    a[j] = transfer;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (i)printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}
