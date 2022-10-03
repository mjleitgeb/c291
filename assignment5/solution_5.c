// Online C compiler to run C program online
#include <stdio.h>

void printSortedMergedArray(int array1[], int lenArray1, int array2[], int lenArray2);

int main() {
    
    int lenArray1;
    int lenArray2;            
    printf("Input Size of Array 1: ");
    scanf("%d",&lenArray1);
    int array1[lenArray1];
    printf("Input Array 1: ");
    for(int i = 0; i < lenArray1; i++){      
       scanf("%d", &array1[i]);
    }
    printf("Input Size of Array 2: ");
    scanf("%d",&lenArray2);
    int array2[lenArray2];
    printf("Input Array 2: ");
    for(int i = 0; i < lenArray2; i++) {     
       scanf("%d", &array2[i]);
    }
    printSortedMergedArray(array1, lenArray1, array2, lenArray2);
    
}
void printSortedMergedArray(int array1[], int lenArray1, int array2[], int lenArray2){
    int lenArray3 = lenArray1 + lenArray2;
    int array3[lenArray3];
    for(int i = 0; i < lenArray1; i++){
       array3[i] = array1[i];
    }
    for(int i = 0; i < lenArray2; i++)   {
        array3[i + lenArray1] = array2[i];
    }
    for(int i = 0; i < lenArray3; i++){
        int sort;
        for(int j = i + 1; j < lenArray3; j++) {
            if(array3[i] > array3[j]) {
                sort = array3[i];
                array3[i] = array3[j];
                array3[j] = sort;
            }
        }
    }
    for(int i = 0; i < lenArray3 ; i++){        
        printf(" %d ", array3[i]);
    }
    printf("\n");
}
