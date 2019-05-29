// P29 queue.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <queue>
using namespace std;//stack在这个命名空间内

int main()
{
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);

	printf("%d\n", que.front());
	que.pop();
	printf("%d\n", que.front());
	que.pop();
	printf("%d\n", que.front());
	que.pop();

	return 0;
}



