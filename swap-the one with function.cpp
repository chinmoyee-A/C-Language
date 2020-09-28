//swapping with functions
#include<stdio.h>
int swap(int* , int*);
int main()
{
	int x,y;
	printf("enter two numbers:");
	scanf("%d%d",&x,&y);
	printf("Before swapping:%d , %d \n",x,y);
	swap(&x,&y);
	printf("After swapping:%d , %d \n",x,y);
	return 0;
}
int swap(int *a , int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
