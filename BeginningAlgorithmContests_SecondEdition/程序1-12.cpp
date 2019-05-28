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
	if(a>=b&&b>=c) printf("%d %d %d\n",c,b,a);
	if(a>=c&&c>=b) printf("%d %d %d\n",b,c,a);
	if(b>=c&&c>=a) printf("%d %d %d\n",a,c,b);
	if(b>=a&&a>=c) printf("%d %d %d\n",c,a,b);
	if(c>=a&&a>=b) printf("%d %d %d\n",b,a,c);
	if(c>=b&&b>=a) printf("%d %d %d\n",a,b,c);
	return 0;
} 
