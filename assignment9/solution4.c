#include <stdio.h>

int main(void){

int size;
int total = 0;
printf("Enter The Size Of Array: ");

scanf("%d",&size);
printf("Enter the elements of the array: ");
int Array[size];

for(int i=0;i<size;i++){
    scanf("%d",&Array[i]);
    total=total+Array[i];
}
printf("%d\n",total-((size*(size-1))/2));
}
