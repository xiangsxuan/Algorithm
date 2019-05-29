// P28 stack.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stack>
using namespace std;//stack在这个命名空间内

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);

	printf("%d\n", s.top());
	s.pop();
	printf("%d\n", s.top());
	s.pop();
	printf("%d\n", s.top());
	s.pop();

    return 0;
}

