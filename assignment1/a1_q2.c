#include <stdio.h>

int main(void){
	
	int cur_month;
	int cur_year;
	int age;

	printf("Enter current month: \n");
	scanf("%d", &cur_month);

	printf("Enter current year: \n");
        scanf("%d", &cur_year);

	printf("Enter your age: \n");
        scanf("%d", &age);

	printf("It is month %d of the year %d and you are %d years old!\n", cur_month, cur_year, age);

}
