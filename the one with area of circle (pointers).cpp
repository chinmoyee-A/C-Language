#include<stdio.h>
#include<math.h>
float aoc(float *radius)
{
	return 3.14*(*radius)*(*radius);
	
}
int main()
{
	float radius;
	printf("Enter the radius:");
	scanf("%f",&radius);
	printf("area of the circle is P: %f",aoc(&radius));
}
