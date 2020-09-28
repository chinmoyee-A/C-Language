//swapping of two number without third variable
#include<stdio.h>
int main()
{
	int a , b;
	printf("Enter 2 integers to swap:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d \nb = %d",a,b);
	return 0;
}
