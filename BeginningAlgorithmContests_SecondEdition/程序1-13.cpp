#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	/*先像下边一样把所有情况罗列一遍，然后再填代码，避免思维乱了 
	if(abc)
	if(acb)
	if(bca)
	if(bac)
	if(cab)
	if(cba)*/
	if(a>=b&&b>=c) printf("%d %d %d",c,b,a);
	else if(a>=c&&c>=b) printf("%d %d %d",b,c,a);
	else if(b>=c&&c>=a) printf("%d %d %d",a,c,b);
	else if(b>=a&&a>=c) printf("%d %d %d",c,a,b);
	else if(c>=a&&a>=b) printf("%d %d %d",b,a,c);
	else if(c>=b&&b>=a) printf("%d %d %d",a,b,c);
	return 0;
} 
