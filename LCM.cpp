#include<stdio.h>
int main()
{
	int n1,n2,lcm=1;
	printf("enter 2 numbers :");
	scanf("%d%d",&n1,&n2);
	int max = (n1 > n2) ? n1 : n2;
	int i=max;
	while(1)
	{
		if(i%n1==0&&i%n2==0)
		{
		  lcm=i;	
		  break;
		}
		else
			i+=max;
	}
	printf("Lcm of %d and %d = %d",n1,n2,lcm);
	return 0;
}
