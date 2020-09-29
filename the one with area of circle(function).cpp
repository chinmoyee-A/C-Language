//area of circle using function
#include<stdio.h>
#include<math.h>
float aoc(float radius)
{
	return 3.14*radius*radius;
}
int main()
{
	float radius,area;
	printf("\n Enter the radius:");
	scanf("%f",&radius);
	area=aoc(radius);
	printf("\n area of the circle is: %f",area);
	return 0;
}
