// P18 ants POJ1852.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
const int Max_d = 1000001;
int length;//length of pole
int antNum;//number of ants
int dis[Max_d] = { 0, };//distance of each ants to the most left
int maxTime = 0;
int minTime = 0;

int max(int first, int second) {
	if (first > second) return first;
	else return second;
}

int min(int first, int second) {
	if (first > second) return second;
	else return first;
}

void solve() {

	for (int a = 0; a < antNum; a++) {
		maxTime = max(max(dis[a], length - dis[a]), maxTime);
		minTime = max(min(dis[a], length - dis[a]), minTime);
	}
}


int main()
{
	scanf_s("%d", &length);
	scanf_s("%d", &antNum);
	for (int a = 0; a < antNum; a++) {
		scanf_s("%d", &dis[a]);
	}

	solve();
	printf_s("%d\n", minTime);
	printf_s("%d\n", maxTime);
	return 0;
}

