#include <stdio.h>

int main(void){

	int user_num;
	int line_counter;
	int line_limit = 0;

	printf("Enter the starting Fizz Buzz number: ");
	scanf("%d", &user_num);
	
	if(user_num <= 0){
		printf("Error: Cannot compute Fizz Buzz of %d \n", user_num);
	}
	else{
	
	for(line_counter = 1; line_counter <= user_num%4; line_counter++) {
		while(line_limit < 4) {
			for(user_num; user_num>0; user_num--){
				if(user_num % 15 == 0){
					printf("Fizz-Buzz ");
				}
				else if(user_num % 5 == 0){
					printf("Buzz ");
				}
				else if(user_num % 3 == 0){
					printf("Fizz ");
				}
				else{
					printf("%d ", user_num);
				}
			}
			line_limit++;
		}
		line_limit = 0;
		printf("\n");
	}
	}
}
