#include<bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    char str[105];
    while (gets(str)) {
        if (!isupper(str[0])) str[0] = toupper(str[0]);
        bool IsBlankBefor = false;
        for (int i = 1; i < strlen(str); i++) {
            if (isblank(str[i])) IsBlankBefor = true;
            if (IsBlankBefor) {
                if (islower(str[i + 1])) {
                    str[i + 1] = toupper(str[i + 1]);
                    IsBlankBefor = false;
                }
            }
        }
        printf("%s\n",&str);
    }
    return 0;
}
