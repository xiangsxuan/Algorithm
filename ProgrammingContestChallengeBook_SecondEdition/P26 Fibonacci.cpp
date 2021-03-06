// P26 Fibonacci.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

const int MAX_N = 50;
int n;							//求第n位斐波那契数列
int memory[MAX_N + 1] = {0};	//记录结果再利用/动态规划/记忆搜索,记录fibnacci计算过的节点,可重复利用这一节点结果.

//斐波那契函数
int Fibonacci(int n) {
	
	if (n <= 1) {
		return n;
	}
	else if (memory[n] != 0) {
		return memory[n];
	}
	else {
		return memory[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
	}

}

int main()
{
	while (scanf_s("%d", &n)) {
		//求第n位斐波那契数列
		printf( "Fib=%d\n", Fibonacci(n) );
	}
    return 0;
}

