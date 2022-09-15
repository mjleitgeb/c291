#include<stdio.h>    
#include<stdlib.h>


int main(void){  
    int convert[10];
    int user_num;
    int counter;    
    printf("Enter the number to convert: ");    
    scanf("%d",&user_num);    
    for(counter=0;user_num>0;counter++){    
        convert[counter]=user_num%2;    
        user_num=user_num/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(counter=counter-1;counter>=0;counter--){    
        printf("%d",convert[counter]);
    }    
 
} 
