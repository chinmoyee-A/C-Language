//swapping 2 variables using 3rd variables
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter 2 numbers to be swapped:");
	scanf("%d  %d", &a, &b);
	printf("\n numbers before swapping: %d, %d", a, b);

	c = a;
	a = b;
	b = c;
	printf("\n number after swapping:%d, %d", a, b);
	return 0;

}
