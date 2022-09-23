

#include <stdio.h>
#include <math.h>

int main(void)
{
    int X;
    int i;
    int n;
    int L;
    int R;
    float tot;
    int prime;
    int power;
    int fact = 1;
    int power_fact;
    
    for(i = L; i <= R; ++i){
        for(j = 1; j <= i; ++j){
            if(i % j != 0)
                prime = i;
        }
    }
    
    for(i=2; i <= n; i++){
        power = i*i;
        fact *= i;
    }
    power_fact = power/fact;
    
    float tot = X + prime + power_fact;
    
  


}

