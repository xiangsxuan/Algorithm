#include<bits/stdc++.h>
using namespace std;
int64_t fibArray[52];
int main() {
    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i <= 50; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    int i;
    while (scanf("%d", &i) != EOF && (-1 != i)) {
        printf("%lld\n", fibArray[i]);
    }
    return 0;
}
