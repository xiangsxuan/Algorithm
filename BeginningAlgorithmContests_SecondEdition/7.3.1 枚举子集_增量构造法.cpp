// 7.3.1 枚举子集_增量构造法.cpp: 定义控制台应用程序的入口点。
//
//如果没理解的话,就用ANSI Common Lisp的想法来想:第一个情况成立,第一个情况可以推出第二个情况,那么这个递归就正确了
#include "stdafx.h"
#include<cstdio>
using namespace std;

void print_subset(int n, int* A, int cur) {
	for (int i = 0; i < cur; i++) printf("%d ", A[i]); // 打印当前集合    
	printf("\n");
	int s = cur ? A[cur - 1] + 1 : 0; // 确定当前元素的最小可能值 //这个值会依次赋值为0,1,2,3,4...一直增量赋值
	for (int i = s; i < n; i++) {
		A[cur] = i;
		print_subset(n, A, cur + 1); // 递归构造子集
	}
}

int A[10];
int main() {
	int n;
	scanf("%d", &n);
	print_subset(n, A, 0);
	return 0;
}

//注释更全的代码1
//#include <iostream>
//using namespace std;
//int a[20];
///*递归输出n以内所有的子集,其中cur为当前下标,初始值0*/
//void print_subset(int n, int* a, int cur) {
//	for (int i = 0; i<cur; i++)//每次递归输出当前子集,靠它来最后输出上一层指定的子集
//		cout << a[i] << ' ';
//	cout << endl;//以行分隔
//
//				 //找到当前子集首个值，因为按字典顺序输出，所以每次找到最小的元素，cur > 0，则minElem=a[cur-1]+1,否则为0
//	int minElem = cur ? a[cur - 1] + 1 : 0;
//
//	//从子集第一个值开始遍历,先不看下面的print_subset(n,a,cur+1)，单看这for循环，
//	//可知是将子集第一个值从头往后依次赋值为 minElem~n-1。
//	//每次第一个值变化后递归设置下一个值(相当于下一层的第一个值)
//	for (int i = minElem; i<n; i++) {
//		a[cur] = i;
//		//当前层子集第一个值
//		//cur+1表示当前层值设置完毕，开始递归下一层，和前面步骤一样。
//		//到达最后一层结束后return 到上一层，然后i++,a[cur]的值(首元素)改变，又反复递归下一层...
//		print_subset(n, a, cur + 1);
//	}
//}
//
//int main() {
//	int n;
//	while (cin >> n, n) {
//		print_subset(n, a, 0);
//	}
//}


//注释更全的代码2
//
////n 全集的元素数目   
////A* 表示已经处理过的集合  
////cur 表示目前的位置   
//void zenglianggouzaofa(int n, int* A, int cur)
//{
//	//把已经完成的子集打印出来  
//	for (int i = 0; i<cur; i++)   printf("%d ", A[i]);
//	putchar('\n');
//
//	//向已有的子集中继续添加元素（try）   
//	//添加元素时要考虑从哪里开始枚举？ 应该是从目前可能的最小的元素开始遍历  
//	int s = cur ? A[cur - 1] + 1 : 1;//稍后解释   
//									 //因为我们认为编号即是内容，后一个“1”是在定义打头的元素是谁 如果是0则是0123.....   
//									 //开始遍历  
//									 //此处不用显式地控制递归边界，因为当到头时 会有s=n 无法循环自动返回   
//	for (int i = s; i <= n; i++)
//	{
//		A[cur] = i;//此处是增量构造的核心处   
//		zenglianggouzaofa(n, A, cur + 1);//继续向A中增加元素    
//	}
//}
