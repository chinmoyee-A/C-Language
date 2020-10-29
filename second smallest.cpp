//second smallest number

#include<stdio.h>
int main()
{
	int a[50],n;
	int s_small;
	int small;
	printf("Enter the size : ");
	scanf("%d",&n);
	printf("Enter the element : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s_small=small=a[0];
	for(int i=1;i<n;i++)
	{
		if(small>a[i])
		{
			s_small=small;
			small=a[i];
		}
		else if(s_small>a[i] &&a[i]!=small)
		{
			s_small=a[i];
		}
	}
	printf("Second smallest number is : %d",s_small);
	return 0;
}
