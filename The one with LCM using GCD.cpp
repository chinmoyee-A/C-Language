// Finding LCM using GCD 
//LCM=n1*n1/gcd
#include<stdio.h>
int main()
{
	int n1, n2, lcm, gcd;
	printf("enter number:\n");
	scanf("%d",&n1);
	printf("enter number:\n");
	scanf("%d",&n2);
	for(int i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			gcd=i;
		}
		lcm=n1*n2/gcd;
		
	}
	printf("LCM:%d",lcm);
	return 0;
}
