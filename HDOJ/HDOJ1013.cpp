//如果存储用int,算法将非常复杂,写了半天放弃了.....
//如果存储用字符串,将简单很多

//字符串思考流程:用字符串存了数,那么判断结束的标准是什么?是字符串的长度等于1或者各位之和小于10,显然第一种要简单很多

//while判断不仅可以当循环用,也可以当作判断用,仔细体会其间的微妙差距
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while (cin>>s && s[0]!='0') {
		while (s.size() > 1) {
			int ret = 0;
			for (int i = 0; i < s.size(); i++) {
				ret += (s[i]-'0');
			}
			s = to_string(ret);
		}
		cout << s<<endl;
	}

	return 0;
}
