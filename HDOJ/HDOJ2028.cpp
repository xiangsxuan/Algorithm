//最大公约数写法：int gcd(int a,int b){return (b>0) ? gcd(b, a%b) : a;}
//注意：lcm(x, y) = x / gcd(x, y)*y，如果先算x*y就会溢出！
#include<bits/stdc++.h>
using namespace std;
int gcd(int num1, int num2) {
    return num2 == 0 ? num1 : gcd(num2, num1%num2);
}
int lcm(int num1, int num2) {
    return num1 / gcd(num1, num2) * num2 ;
}
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        int num1 = 0, num2 = 0;
        scanf("%d", &num1);
        for (int i = 1; i < n; i++) {
            scanf("%d", &num2);
            num1 = lcm(num1, num2);
        }
        printf("%d\n", num1);
    }
    return 0;
}
