// P113 线段上格点的个数.cpp: 定义控制台应用程序的入口点。
//
//要点:
//1.线段上格点的个数=( |x1-x2|与|y1-y2|的公约数 ) 减 1
//2.最大公约数辗转相除法
#include "stdafx.h"
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())


//辗转相除法
int gcd(int a, int b)

{

	return b == 0 ? a : gcd(b, a%b);

}

pair<int,int> p1 = mp(1, 11);
pair<int,int> p2 = mp(5, 3);

int main()
{

	printf("%d\n", gcd( abs(p1.first - p2.first), abs(p1.second - p2.second) )-1);
	return 0;
}

