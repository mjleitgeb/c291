#include <stdio.h>

int main(void){

	int a =0;
	int d = 0;
	int n = 0;

	printf("Enter starting number:\n");
	scanf("%d", &a);

	printf("Enter the common difference:\n");
        scanf("%d", &d);

	printf("Enter the nth term to be found:\n");
        scanf("%d", &n);

	int ap = 0;
	ap = a + (n - 1) * d;

	printf("The %d th term of the series is %d\n", n, ap);
}

