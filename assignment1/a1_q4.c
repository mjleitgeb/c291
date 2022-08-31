#include <stdio.h>

int main(void){
	int pi = 3;
	int radius = 0;

	printf("Enter radius:\n");
	scanf("%d", &radius);

	int area = 0;
	area = pi * radius * radius;

	int diameter =0;
	diameter = 2 * radius;

	int circumference;
	circumference = 2 * pi * radius;

	printf("The Area of a circle with radius %d is %d\n", radius, area);
	printf("The Diameter of a circle with radius %d is %d\n", radius, diameter);
	printf("The Circumference of a circle with radius %d is %d\n", radius, circumference);
}

