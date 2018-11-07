//两种思路:
//1.列举数列,根据规律联系实际过程(或者颠倒过来,这个思考过程并非固定的),
//  知道第i年的数目是 上一年的 加 3年前的(因为3年后第4年可以生了,所以3年那批有多少生多少),
//  思考到推导出递推公式:i年个数为a[i]=a[i-1]+a[i-3]
//2.直接模拟,如下
#include<bits/stdc++.h>
using namespace std;
void grow(vector<int>& sum) {
	for (int i = 0; i < sum.size(); i++) {
		sum[i]++;
	}
}
void breed(vector<int>& sum) {
	for (int i = 0; i < sum.size(); i++) {
		if (sum[i] > 3) sum.push_back(1);
	}
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int num;
	while (scanf("%d", &num) != EOF && num) {
		vector<int> sum = { 4 };//初始化为4的原因,第4年牛才会grow
		for (int i = 1; i < num; i++) {
			grow(sum);
			breed(sum);
		}
		printf("%d\n", sum.size());
	}
	return 0;
}
