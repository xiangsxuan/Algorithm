//a,b都不等于0可以这样写: (x != 0||y != 0) ,也可以 (x != 0, y != 0)
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (0 == n % i) {
            return false;
        }
    }
    return true;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int x, y;
    while (scanf("%d%d", &x, &y) == 2 && (x != 0 || y != 0))
    {
        bool ok = true;
        for (int i = x; i <= y; i++) {
            if (!isPrime( i*i+i+41 )) {
                printf("Sorry\n");
                ok = false;
                break;
            }
        }
        if (ok) printf("OK\n");
    }
    return 0;
}
