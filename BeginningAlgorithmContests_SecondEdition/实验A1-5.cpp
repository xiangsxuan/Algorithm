#include<stdio.h>
#include<math.h>
int main() {
	printf("A1:\n");
	printf("%d\n",11111*11111);
	printf("%d\n",111111*111111);
	printf("%d\n",111111111*111111111);
	printf("A2:\n");
	printf("%lf\n",11111.0*11111.0);
	printf("%lf\n",111111.0*111111.0);
	printf("%lf\n",111111111.0*111111111.0);
	printf("A3:\n");
	printf("%d\n",sqrt(-10));
	printf("%lf\n",sqrt(-10));
	printf("A4:\n");
	printf("%d\n",1.0/0.0);
	printf("%lf\n",1.0/0.0);
	printf("%d\n",0.0/0.0);
	printf("%lf\n",0.0/0.0);
	printf("A5:\n");
//	printf("%d",1/0);//±®¥Ì¡À 
	return 0 ;
}
