#include<bits/stdc++.h>
using namespace std;
int securityLevel(char* str) {
	int level1 = 0, level2 = 0, level3 = 0, level4 = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A'&&str[i] <= 'Z') {
			level1 = 1;
		}
		if (str[i] >= 'a'&&str[i] <= 'z') {
			level2 = 1;
		}
		if (str[i] >= '0'&&str[i] <= '9') {
			level3 = 1;
		}
		if (str[i] == '~' || str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^') {
			level4 = 1;
		}
	}
	return level1 + level2 + level3 + level4;
}
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char str[55];
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", str);
		if (securityLevel(str) >= 3 && (strlen(str) >= 8 && strlen(str) <= 16)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
