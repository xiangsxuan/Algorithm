#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000 + 2];
    int testCase;
    scanf("%d", &testCase);
    while (testCase--) {
        scanf("%s", str);
        int length = strlen(str);
        int sum = 1;
        for (int i = 0; i < length; i++) {
            if (str[i] == str[i + 1]) {
                sum++;
            }
            else {
                if (1 < sum) {
                    printf("%d%c", sum, str[i]);
                }
                else {
                    printf("%c", str[i]);
                }
                sum = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
