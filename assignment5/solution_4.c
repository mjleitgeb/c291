// Online C compiler to run C program online
#include <stdio.h>

int findIntersection(int input1[], int input1_length, int input2[], int input2_length);
int findUnion(int input1[], int input1_length , int input2[], int input2_length);
void calculateJaccard(int input1[], int input1_length, int input2[], int input2_length);


int main(void) {
    int input1_length;
    int input2_length;
    printf("Input first set length: ");
    scanf("%d",&input1_length);
    int input1[input1_length];
    printf("Input Set 1: ");
    for(int i = 0; i < input1_length; i++){      
       scanf("%d", &input1[i]);
    }
    printf("Input second set length: ");
    scanf("%d",&input2_length);
    int input2[input2_length];
    printf("Input Set 2: ");
    for(int i = 0; i < input2_length; i++){      
       scanf("%d", &input2[i]);
    }
    //printf("%d", findIntersection(input1, input1_length, input2, input2_length));
    //printf("\n");
    //printf("%d", findUnion(input1, input1_length, input2, input2_length));
    //printf("\n");
    calculateJaccard(input1, input1_length, input2, input2_length);
}
int findIntersection(int input1[], int input1_length, int input2[], int input2_length){
    int count = 0;
    for(int i = 0; i<input1_length; i++){
        for(int j = 0; j<input2_length; j++){
            if(input1[i]==input2[j]){
                count++;
            }
        }
    }
    return count;
}
int findUnion(int input1[], int input1_length , int input2[], int input2_length){
    int i = 0;
    int j = 0;
    int counter = 0;
    while (i < input1_length && j < input2_length) {
        if (input1[i] < input2[j]){
           // printf(" %d ", input1[i++]);
            input1[i++];
            counter++;}
        else if (input2[j] < input1[i]){
            //printf(" %d ", input2[j++]);
            input2[j++];
            counter++;}
        else {
            //printf(" %d ", input2[j++]);
            input2[j++];
            i++;
            counter++;
        }
    }
    //while (i < input1_length)
        //printf(" %d ", input1[i++]);
        
    //while (j < input2_length)
        //printf(" %d ", input2[j++]);
    counter += 1;
    return counter;
    
}
void calculateJaccard(int input1[], int input1_length, int input2[], int input2_length){
    float intersect;
    float un;
    intersect = findIntersection(input1, input1_length, input2, input2_length);
    //printf("%d", intersect);
    //printf("\n");
    un = findUnion(input1, input1_length, input2, input2_length);
    //printf("%d", un);
    //printf("\n");
    printf("Jaccard similarity is %f", (intersect/un));
}
