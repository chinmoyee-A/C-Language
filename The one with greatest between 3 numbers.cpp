//// C program to find largest of three numbers in C using nested if
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers : ");
scanf("%d %d %d", &a,&b,&c);
int max = 0;
if(a > b && a > c)
printf("\nThe largest among the three numbers is %d",a);
else if(b > a && b > c)
printf("\nThe largest among the three numbers is %d",b);
else
printf("\nThe largest among the three numbers is %d",c);
printf("\n");
return 0;
}
