//这里为什么可以用贪心的原因(能发多大的钱就发多大的钱),思考如下
//如果钱币面值不是：100元、50元、10元、5元、2元、1元
//            而是：100元、50元、10元、5元、4元、2元
//比方说想发6元，就会先把5元选了，但是后面却凑不出这个钱数了，所以这个1元很关键
//观察得出：其实题目给出的钱币特征：[大钱，全都可以由小钱凑出来]
//          这就是为什么可以用贪心的原因
#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int value[6] = { 100,50,10,5,2,1 };
	int n = 0;
	while (scanf("%d", &n) != EOF && n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int money = 0;
			scanf("%d", &money);
			for (int j = 0; j < 6; j++) {
				if (money / value[j] != 0) {
					int num = money / value[j];
					sum += num;
					money -= num * value[j];
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
