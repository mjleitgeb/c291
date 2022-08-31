#include <stdio.h>

int main(void){

	int inputa = 0;
	int inputb = 0;

	printf("Input a\n");
	scanf("%d", &inputa);

	printf("Input b\n");
        scanf("%d", &inputb);

	int sum = 0;
	sum = inputa + inputb;
	int difference = 0;
	difference = inputa - inputb;
	int product = 0;
	product = inputa * inputb;
	int remainder = 0;
	remainder = inputa % inputb;

	printf("The sum of %d and %d is %d\n", inputa, inputb, sum);
	printf("The difference of %d and %d is %d\n", inputa, inputb, difference);
	printf("The product of %d and %d is %d\n", inputa, inputb, product);
	printf("The remainder of %d and %d is %d\n", inputa, inputb, remainder);
}
