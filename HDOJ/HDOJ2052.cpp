#include<bits/stdc++.h>
using namespace std;
void for_printf(char symbol, int time) {
	for (int i = 0; i < time; i++) {
		printf("%c", symbol);
	}
}
int main() {
	int width, height;
	while (scanf("%d%d", &width, &height) != EOF) {
		printf("+");
		for_printf('-', width);
		printf("+\n");
		for (int i = 0; i < height; i++)
		{
			printf("|");
			for_printf('\x20', width);//'\x20'ÊÇ¿Õ¸ñ
			printf("|");
			printf("\n");
		}
		printf("+");
		for_printf('-', width);
		printf("+\n\n");
	}
	return 0;
}
