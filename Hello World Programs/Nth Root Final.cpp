#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2;
	float res;
	printf("enter the desired number");
	scanf ("%d",&n1);
	printf("enter the desired number");
	scanf ("%d",&n2);
	res = pow(n1,(1.0/n2));
	printf("Nth root is:%f",res);
	return 0;
}
