//列举了前100项后,发现了规律
#include<bits/stdc++.h>
using namespace std;
//long long f[1000000 + 3];

int main()
{
    /*f[0] = 7; f[1] = 11;

    for (int i = 2; i < 100; i++) {
        f[i] = f[i - 1] + f[i - 2];
        printf("i=%d %lld f[i]%%3=%d\n", i,f[i],f[i]%3);
    }*/
    int n;
    while (scanf("%d", &n) == 1) {
        printf("%s\n",(n%4)==2?"yes":"no");
    }
    return 0;
}
