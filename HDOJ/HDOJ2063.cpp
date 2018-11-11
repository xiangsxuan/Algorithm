//二分最大匹配算法_匈牙利算法
//https://blog.csdn.net/dark_scope/article/details/8880547
//https://blog.csdn.net/lw277232240/article/details/72615522?utm_source=blogxgwz5
//http://acm.hdu.edu.cn/discuss/problem/post/reply.php?postid=34260&messageid=1&deep=0
//https://www.cnblogs.com/wangjunyan/p/5563154.html
//http://www.matrix67.com/blog/archives/39
#include<bits/stdc++.h>
using namespace std;
int line[505][505];	//i女可以搭j男吗:partner[i][j]
int used[505];		//i男在一轮可用性为used[i],该标记具体用法看代码
int paired[505];	//i男搭档是pair[i]女
int girlTotal, boyTotal;//女生的人数，男生的人数

bool pairDfs(int idx_girl) {
	for (int idx_boy = 1; idx_boy <= boyTotal; idx_boy++) {
		if (line[idx_girl][idx_boy] == 1 && used[idx_boy] == 0) {//used用来标记,使每轮只能使用一次
			used[idx_boy] = 1;
			if (paired[idx_boy] == 0 || pairDfs(paired[idx_boy])) {
				//idx_boy男有搭档了,但我们现在在撮合idx_boy和idx_girl,就给paired[idx_boy]女同学换一个男搭档. 这里的||用的很巧妙
				paired[idx_boy] = idx_girl;
				return true;
			}
		}
	}
	return false;
}

int main() {
	int k;//组合数目
	while (scanf("%d", &k) != EOF && k) {
		scanf("%d%d", &girlTotal, &boyTotal);
		memset(line, 0, sizeof(line));
		memset(paired, 0, sizeof(paired));
		int girl_i, boy_i;
		while (k--) {
			scanf("%d%d", &girl_i, &boy_i);
			line[girl_i][boy_i] = 1;
		}
		int ret = 0;
		for (int i = 1; i <= girlTotal; i++) {
			memset(used, 0, sizeof(used));
			if (pairDfs(i)) ret++;
		}
		printf("%d\n", ret);
	}
	return 0;
}