#include<bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    char str[1000];
    while (n--) {
        scanf("%s", str);
        int length = strlen(str);
        bool isPalindrome = true;
        for (int i = 0; i < (length / 2); i++) {
            if (str[i] != str[length - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}
