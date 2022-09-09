#include <stdio.h>

int main(void){
	
	int year;
	int month;
	int day;

	printf("Enter a year\n");
	scanf("%d", &year);
	printf("Enter a month\n");
        scanf("%d", &month);
	printf("Enter a day\n");
        scanf("%d", &day);

	if(year % 400 == 0){
		if(month == 2 && day == 29){
                printf("The date is valid\n");
        	}	
	}
	else if(year % 100 == 0){
		if(month == 2 && day == 29){
                printf("The date is invalid\n");
                }  
	}
	else if(year % 4 == 0){
		if(month == 2 && day == 29){
                printf("The date is valid\n");
                }  
	}
	else{
		if(month == 2 && day == 29){
                printf("The date is invalid\n");
                }  

		else if((day >= 1 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){
			printf("The date is valid\n");
		}
		else if((day >= 1 && day <=30) && (month == 4 || month == 6 || month == 9 || month == 11)){
			printf("The date is valid\n");
		}
		else if((day >= 1 && day <= 28) && (month == 2)){
			printf("The date is valid\n");
		}
		else{
			printf("The date is invalid\n");
		}
	}
}


