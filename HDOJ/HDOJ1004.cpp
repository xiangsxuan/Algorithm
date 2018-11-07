#include<bits/stdc++.h>
using namespace std;
int main() {
	int kase;
	while (scanf("%d", &kase) == 1 && kase) {
		map<string, int> colorMap;
		for (int i = 0; i < kase; i++) {
			string colorStr;
			cin >> colorStr;
			if (colorMap.find(colorStr) == colorMap.end()) {
				colorMap.insert({ colorStr, 1 });
			}
			else {
				colorMap[colorStr]++;
			}
		}
		int max = 0;
		string maxColorStr;
		for (auto c : colorMap) {
			if (c.second > max) {
				max = c.second;
				maxColorStr = c.first;
			}
		}
		cout << maxColorStr << endl;
	}
	return 0;
}
