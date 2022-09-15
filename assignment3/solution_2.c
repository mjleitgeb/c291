#include <stdio.h>

int main(void){

	int user_num;
	int factor;
	int check1;
	int check2;

	printf("Enter a positive integer that you wish to find prime factors of: \n");
	scanf("%d", &user_num);
	printf("The Prime Factorization of %d is ", user_num);

	if(user_num <= 1){
		printf("%d has no prime factorization", user_num);
	}
	else{

	for(check1=2; check1<=user_num; ++check1){

		if(user_num % check1 == 0){
			factor = 1;
            		for(check2=2; check2<=check1/2; ++check2){
                		if(check1%check2==0){
                    			factor = 0;
                    			break;
				}
			}
                if(factor==1){
                	printf("%d \n", check1);
            }
        }
    }
}
}
