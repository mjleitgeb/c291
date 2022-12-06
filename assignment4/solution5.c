#include<math.h>
#include<stdio.h>

float final_x(int x,int n){
    int last=x;
    float value1=last;
    for(int i=2;i<=n;i++){
        last=last*(x/(i));
        value1+=last;
    }
    return value1;
}
int primes(int l,int r,int n){
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    int j=0;
    for(int i=l;i<r+1;i++){
        int y=0;
        int iter=sqrt(i);
        for(int j=2;j<=iter;j++){
            if(i%j==0){
                y=1;
                break;
            }
        }
        if(y==0){
            if(j<n){
                arr[j++]=i;
            }
            else{
                break;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            return sum;
        }
        else
        sum+=arr[i];
    }
    return sum;
}
int main(void){
    int x,n,l,r;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of L: ");
    scanf("%d", &l);
    printf("Enter the value of R: ");
    scanf("%d", &r);
    float val1= final_x(x,n);
    int val2=primes(l,r,n);
    printf("%f",val1+val2);
}
