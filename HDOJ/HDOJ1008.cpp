#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (scanf("%d", &n) == 1 && n) {
        int ret = 0;
        int lastFloor = 0;
        int nextFloor;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &nextFloor);
            ret += (lastFloor > nextFloor ? (4 * (lastFloor - nextFloor)) : (6 * (nextFloor - lastFloor)));
            lastFloor = nextFloor;
            //printf("%d\n",ret);
        }
        printf("%d\n", ret + n * 5);
    }
    return 0;
}
