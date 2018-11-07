#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int h1, m1, s1, h2, m2, s2;
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
		int s_sum = s1 + s2;
		int m_sum = m1 + m2;
		int h_sum = h1 + h2;
		if (s_sum >= 60) {
			m_sum++;
			s_sum -= 60;
		}
		if (m_sum >= 60) {
			h_sum++;
			m_sum -= 60;
		}
		printf("%d %d %d\n", h_sum, m_sum, s_sum);
	}
	return 0;
}
