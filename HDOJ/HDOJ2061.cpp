#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;//测试样例数
	while (scanf("%d", &n) != EOF && n) {
		char courseName[35];
		double credits;
		double score;
		bool dontPass;
		while (n--) {
			dontPass = false;
			double sum_creditsPlusScore = 0;
			double sum_credits = 0;
			int k;//课程数
			scanf("%d", &k);
			for (int j = 0; j < k; j++) {
				scanf("%s%lf%lf", courseName, &credits, &score);
				if (score < 60 && score >= 0) {
					dontPass = true;
				}
				else {
					sum_creditsPlusScore += (credits * score);
					sum_credits += credits;
				}
			}

			if (dontPass) {
				printf("Sorry!\n");
			}
			else {
				printf("%.2lf\n", sum_creditsPlusScore / sum_credits);
			}
			if (n) printf("\n");
		}
	}
	return 0;
}