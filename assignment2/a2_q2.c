#include <stdio.h>

int main(void){

	int angle1 = 0;
	int angle2 = 0;
	int angle3 = 0;

	printf("Enter first angle\n");
	scanf("%d", &angle1);

	printf("Enter second angle\n");
        scanf("%d", &angle2);

	printf("Enter third angle\n");
        scanf("%d", &angle3);

	if(angle1 < 0 || angle2 < 0 || angle3 < 0){
		printf("The triangle is invalid\n");
	}
	else if(angle1 + angle2 + angle3 != 180){
		printf("The triangle is invalid\n");
	}
	else{
		printf("The triangle is valid\n");
	

		if(angle1 < 90 && angle2 < 90 && angle3 < 90){
			printf("It's an acute triangle\n");
		}	
		else if(angle1 == 90 || angle2 == 90 || angle3 == 90){
			printf("It's a right triangle\n");
		}
		else if(angle1 > 90 || angle2 > 90 || angle3 > 90){
			printf("It's an obtuse triangle\n");
		}
		
		if(angle1 == angle2 || angle1 == angle3 || angle3 == angle2){
			printf("The triangle is isosceles\n");
			
			if(angle1 == angle2 && angle1 == angle3 && angle2 == angle3){
				printf("The triangle is equilateral\n");
			}
		}
			
		else{
			printf("The triangle is not isosceles\n");
		}
	}
}
			
