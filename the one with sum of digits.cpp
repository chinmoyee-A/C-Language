//Sum of digits
#include<stdio.h>
int sum_of_digits(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
	
}
int main()
{
	int n ;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	printf("the sum of digits are : %d",sum_of_digits(n));
	return 0;
}
