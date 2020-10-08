#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("\n Enter the number : ");
	scanf("%d",&n);
	printf("\n Reversed number : ");
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d\n",rev);
	return 0;
}
