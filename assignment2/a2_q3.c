#include <stdio.h>
#include <math.h>

int main(void){
	double operand1;
	double operand2;
	char operator;

	scanf("%lg %c %lg", &operand1, &operator, &operand2);

	int sum;
	int difference;
	float product;
	float div;
	float mod;
	float power;

	if(operator == '+'){
		sum = operand1 + operand2;
		printf("%d\n", sum);
	}
	else if(operator == '-'){
                difference = operand1 - operand2;
                printf("%d\n", difference);
        }
	else if(operator == '*'){
                product = operand1 * operand2;
                printf("%.2f\n", product);
        }
	else if(operator == '/' && operand2 == 0){
                printf("Error: dividing by 0\n");
        }
	else if(operator == '/'){
                div = operand1 / operand2;
                printf("%.2f\n", div);
        }
	else if(operator == '%'){
		mod =(int) operand1 % (int) operand2;
		printf("%.2f\n", mod);
	}
	else if(operator == '^'){
		printf("%.2f\n", pow(operand1, operand2));
	}
	else if(operator == 'r' && operand1 == 2){
		printf("%.2f\n", sqrt(operand2));
	}
	else if(operator == 'r' && operand1 == 3){
                printf("%.2f\n", cbrt(operand2));
        }



}
