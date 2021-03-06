// 7.2 枚举排列.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<bits/stdc++.h>
using namespace std;

int A[101];

//输出1~length的全排列
void permutation_recursion(int *A, int length, int cur) {
	if (cur == length) {//这里应该用length而不是length-1,以后考虑边界情况时记住,递归的边界可能是设置的比较[第一个越界值]
		for (int i = 0; i < length ; i++) {
			printf("%d", A[i]);
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= length; i++) {
			int ok = 1;
			for (int j =0; j < cur; j++) {
				if (i == A[j]) {
					ok = 0;
				}

			}
			if (ok) {
				A[cur] = i;
				permutation_recursion(A, length, cur + 1);
			}
		}
		//permutation_recursion(选过的 + [没选的中的选一个], 没选过的 - 选走的一个);
	}
}

//输出A[]数组的全排列
//n为数组长度
void permutation_std(int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	sort(A, A + n);
	do {
		for (int i = 0; i < n; i++) {
			printf("%d", A[i]);
		}
		printf("\n");
	} while (next_permutation(A, A + n));
}

int main()
{
	permutation_recursion(A, 3, 0);
	printf("接下来输入3个数(可以输入1 2 3和上例比较),将测试std的next_permutation\n");
	permutation_std(3);
	return 0;
}


//void permutation_recursion(选过的,没选过的) {
//	if (没选过的没了) {
//		输出选过的序列;
//	}
//	else {
//		permutation_recursion(选过的 + [没选的中的选一个], 没选过的 - 选走的一个);
//	}
//}
