#include <stdio.h>


int isPerfectNumber(int x, int sum, int i);

int main(void)
{
    
    int x;
    int sum = 0;
    int i;
	printf("Enter a number: ");
	scanf("%d", &x);
    
    int perf = isPerfectNumber(x, sum, i);
}
int isPerfectNumber(int x, int sum, int i){
    for(i = 1; i <= x / 2; i++){
        if(x%i == 0){
            sum += i;
        }
    }
    if(sum == x && x > 0){
        printf("%d is a perfect number", x);
    }
    else
    {
        printf("%d is not a perfect number", x);
    }
}
