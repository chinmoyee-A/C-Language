//count number of digits
#include<stdio.h>
int main()
{
	int count=0,a;
	printf("enter numbers : \n");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("number of digits are : %d ",count);
}
