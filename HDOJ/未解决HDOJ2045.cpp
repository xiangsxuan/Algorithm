//传球法解决环形染色问题,小学奥数:http://video.m.baidu.com/platapi/videoindex?srcid=100014&loc=http%3A%2F%2Fwww.internal.video.baidu.com%2F8d69acee75031a203d7851b7e68daf6d.html
#include<bits/stdc++.h>
using namespace std;
long long dp[55];
const int colorCategory = 3;
int main() {
	dp[1] = ret[1] = 3;
	dp[2] = ret[2] = 6;
	dp[3] = ret[3] = 6;
	for (int i = 4; i < 55; i++) {
		dp[i] = colorCategory * pow((colorCategory - 1), i - 1);//手推几个就知道了(另外其实不用递推也行,m个颜色i个方格有m*(m-1)^(i-1)个选取方法)
	}
	for (int i = 4; i < 55; i++) {
		ret[i] = dp[i] - dp[i - 1];
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%lld\n", ret[n]);
	}
	return 0;
}
