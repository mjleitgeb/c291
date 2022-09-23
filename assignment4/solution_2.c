#include <stdio.h>


int findgcd(int x, int y);

int main(void)
{
    
    int x, y;
	printf("Enter 1st positive integer: ");
	scanf("%d", &x);
	printf("Enter 2nd positive integer: ");
	scanf("%d", &y);
    
    int gcd = findgcd(x, y);
    printf("GCD of %d and %d is %d", x, y, gcd);
}
int findgcd(int x, int y){
    if (y != 0)
        return findgcd(y, x % y);
    else
        return x;


}
