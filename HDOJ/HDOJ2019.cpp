#include<bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int amount, insert;
    while (scanf("%d%d", &amount, &insert) != EOF && (insert&&amount)) {
        int inputNum;
        int blankTag = 0;
        bool inserted = false;
        for (int i = 0; i < amount; i++) {
            scanf("%d", &inputNum);
            if (blankTag++)printf(" ");
            if (inputNum >= insert && !inserted) {
                printf("%d %d", insert, inputNum);
                inserted = true;
            }
            else if (inputNum <= insert || inserted) {
                printf("%d", inputNum);
            }
        }
        printf("\n");
    }
    return 0;
}
