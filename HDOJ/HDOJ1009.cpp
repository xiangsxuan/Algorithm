//物品可分割的背包问题
//感觉这道题用map比较好,但因为我不常用map,这里我把map用法写错了,备注再最底下的注释里
#include<bits/stdc++.h>
using namespace std;
struct node {
	double value;
	double weight;
	double val_wei;// (double)value/weight
}a[1010];
int cmp(node a, node b) {
	return a.val_wei>b.val_wei;
}

int main() {
	int M,  N;
	while (scanf("%d%d", &M, &N) == 2 && (M + N) != -2) {
		double unitPrice;
		for (int i = 0; i < N; i++) {
			scanf("%lf%lf", &a[i].value, &a[i].weight);
			a[i].val_wei = a[i].value/a[i].weight;
		}
		sort(a, a + N, cmp);
		double valueSum = 0.0;
		for (int i = 0; i < N; i++) {
			if (M - a[i].weight > 0) {
				valueSum += a[i].value;
				M -= a[i].weight;
			}else {
				valueSum += ((double)M / a[i].weight) * a[i].value;
				break;
			}
		}
		printf("%.3f\n", valueSum);
	}
	return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//typedef struct cost_weight {
//	int cost;
//	int weight;
//}cost_weight;
//cost_weight make_cw(int Pcost, int Pweight) {
//	cost_weight c = { Pcost,Pweight };
//	return c;
//}
//
//int main() {
//	int M, N;//M为容量 N为物品个数
//	map<double, cost_weight> thingsMap;//重量,花费,单价
//	vector<double> unitPrice;
//	while (scanf("%d%d", &M, &N) == 2 && (M + N) != -2) {
//		int J, F;
//		double unitPrice;
//		for (int i = 0; i < N; i++) {
//			scanf("%d%d", &J, &F);
//			unitPrice = (double)J / (double)F;
//			thingsMap.insert({ unitPrice,make_cw(J,F) });
//		}
//		cout << thingsMap[0].cost << " " << thingsMap[0].weight << endl;
//		cout << thingsMap[1].cost << " " << thingsMap[1].weight << endl;
//	}
//	return 0;
//}
