#include <stdio.h>
#include <math.h>

int main(void)
{
    int k;
    int n;
    float p;
    int n_factorial = 1;
    int k_factorial = 1;
    int nk_diff;
    int n_k_factorial = 1;
    float nk_calc;
    double p_k;
    float p_sub;
    double p_nk;
    float answer;
    int i;
    
    
    printf("Enter k value: ");
    scanf("%d", &k);
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("Enter p value: ");
    scanf("%f", &p);
    nk_diff = n-k;
    p_sub = 1 - p; 
    
    for(i = 1; i <= n; ++i){
        n_factorial *= i;
    }
    for(i = 1; i <= k; ++i){
        k_factorial *= i;
    }
    for(i = 1; i <= nk_diff; ++i){
        n_k_factorial *= i;
    }
    printf("%d\n", n_k_factorial);
    
    
    nk_calc = n_factorial / (k_factorial*n_k_factorial);
    
    p_k = pow(p, k);
    p_nk = pow(p_sub, nk_diff);
    
    answer = nk_calc * p_k * p_nk;
    
    printf("The answer is %f", answer);

    
}
