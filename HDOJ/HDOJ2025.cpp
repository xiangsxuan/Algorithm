//注意函数用法:scanf("%s",ch)读入%s到char数组时，不需要&符号
#include<bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    char ch[105];
    while (scanf("%s", ch) == 1) {
        char maxCh = ch[0];
        for (int i = 0; i < strlen(ch); i++) {
            if (ch[i] > maxCh) {
                maxCh = ch[i];
            }
        }
        for (int i = 0; i < strlen(ch); i++) {
            if (ch[i] != maxCh) {
                printf("%c", ch[i]);
            }
            else {
                printf("%c(max)", ch[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
