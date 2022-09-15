#include <stdio.h>

int main(void){
	int user_num;
    	int print_count;
    	int run_count;
    	int counter = 1;
    	int half;
    
    	printf("Enter the number of rows: \n");
    	scanf("%d", &user_num);
    	half = user_num/2;
    	counter = user_num - 1;
	if(user_num%2 == 0){
        	printf("Number must be odd.\n");
    	}
    	else if(user_num < 0){
        	printf("Number must be positive.\n");
    	}
    	else{
    	for (run_count = 1; run_count <= user_num/2 + 1; run_count++)
    	{
        	for (print_count = 1; print_count <= counter; print_count++)
            	printf(" ");
        	--counter;
        	for (print_count = 1; print_count <= 2 * run_count - 1; print_count++)
            	printf("*");
        	printf("\n");
     	}
     	counter = half + 1;
     	for (run_count = 1; run_count <= user_num/2; run_count++)
     	{
         	for (print_count = 1; print_count <= counter; print_count++)
             	printf(" ");
         	++counter;
         	for (print_count = 1 ; print_count <= 2 *(half - run_count) + 1; print_count++)
             	printf("*");
         	printf("\n");
}
}
}
