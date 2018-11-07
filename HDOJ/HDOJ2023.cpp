#include<bits/stdc++.h>
using namespace std;
int a[55][10];
double stuAvg[55];
double couAvg[10];
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int stuNum = 0, courseNum = 0;
	while (scanf("%d%d", &stuNum, &courseNum) != EOF) {
		for (int i_stu = 0; i_stu < stuNum; i_stu++) {
			for (int j_cou = 0; j_cou < courseNum; j_cou++) {
				scanf("%d", &a[i_stu][j_cou]);
			}
		}
		//学生平均成绩
		for (int i_stu = 0; i_stu < stuNum; i_stu++) {
			double sum = 0.0;
			for (int j_cou = 0; j_cou < courseNum; j_cou++) {
				sum += a[i_stu][j_cou];
			}
			if (i_stu)printf(" ");
			printf("%.2f", sum / courseNum);
		}
		printf("\n");
		//单科平均成绩
		for (int i_cou = 0; i_cou < courseNum; i_cou++) {
			double sum = 0.0;
			for (int j_stu = 0; j_stu < stuNum; j_stu++) {
				sum += a[j_stu][i_cou];
			}
			if (i_cou)printf(" ");
			couAvg[i_cou] = sum / stuNum;
			printf("%.2f", couAvg[i_cou]);
		}
		printf("\n");
		//各科成绩均大于等于平均成绩
		int goodStuSum = 0;
		for (int i_stu = 0; i_stu < stuNum; i_stu++) {
			bool isGoodStu = true;
			for (int j_cou = 0; j_cou < courseNum; j_cou++) {
				if (a[i_stu][j_cou] < couAvg[j_cou]) {
					isGoodStu = false;
					break;
				}
			}
			if (isGoodStu)goodStuSum++;
		}
		printf("%d\n\n", goodStuSum);
	}
	return 0;
}
