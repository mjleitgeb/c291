#include <stdio.h>

int main(void){
int size;
int num_even = 0;
int num_odd = 0;
int Or = 0;
int track;
int Xor = 0;
printf("Enter The Size Of Array: ");

scanf("%d",&size);
printf("Enter the elements of the array: ");
int Array[size];

for(int i=0;i<size;i++){
    scanf("%d",&Array[i]);
    if(Array[i]%2==0){
        num_even++;
    }
    else{
        num_odd++;
    }
}

int a=(num_odd*(num_odd-1))/2;

for(int i=0;i<size;i++){
    if(Array[i]%2==1){
        Or=Or+(size-1-i);
    }
    else{
        track=0;
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==1){
                track++;
            }
        }
        Or=Or+track;
    }
}


for(int i=0;i<size;i++){
    if(Array[i]%2==1){
        track=0;
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==0){
                track++;
            }
        }
        Xor=Xor+track;
    }
    else{
        track=0;
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==1){
                track++;
            }
        }
        Xor=Xor+track;
    }
}

printf("Total AND pairs: %d\n",a);
int num_pairs=a;
for(int i=0;i<size;i++){
    if(Array[i]%2==1){
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==1){
                num_pairs--;
                if(num_pairs==0 && a!=1){
                    printf("(%d, %d)",Array[i],Array[j]);
                }
                else{
                    printf("(%d, %d)",Array[i],Array[j]);
                }
            }
        }
    }
}
printf("\n");

printf("Total OR pairs: %d\n",Or);
num_pairs=Or;
for(int i=0;i<size;i++){
    if(Array[i]%2==1){
        for(int j=i+1;j<size;j++){
            num_pairs--;
            if(num_pairs==0 && Or!=1){
                printf("(%d, %d)\n",Array[i],Array[j]);
            }
            else{
                printf("(%d, %d)\n",Array[i],Array[j]);
            }
        }
    }
    else{
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==1){
                num_pairs--;
                if(num_pairs==0 && Or!=1){
                    printf("(%d, %d)\n",Array[i],Array[j]);
                }
                else{
                    printf("(%d, %d)\n",Array[i],Array[j]);
                }
            }
        }
    }
}
printf("\n");


printf("Total XOR pairs: %d\n",Xor);
num_pairs=Xor;
for(int i=0;i<size;i++){
    if(Array[i]%2==1){
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==0){
                num_pairs--;
                if(num_pairs==0 && Xor!=1){
                    printf("(%d, %d)\n",Array[i],Array[j]);
                }
                else{
                    printf("(%d, %d)\n",Array[i],Array[j]);
                }
            }
        }
    }
    else{
        for(int j=i+1;j<size;j++){
            if(Array[j]%2==1){
                num_pairs--;
                if(num_pairs==0 && Or!=1){
                    printf("(%d, %d)\n",Array[i],Array[j]);
                }
                else{
                    printf("(%d, %d)\n",Array[i],Array[j]);
                }
            }
        }
    }
}
printf("\n");
}
