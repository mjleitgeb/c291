// Online C compiler to run C program online
#include <stdio.h>

void generateKGrams(int n, int k, char kGrams[][k+1], char input[]);
void printKGrams(int n, int k, char kGrams[][k+1]);
int length(char str[]);

int main() {
    // Write C code here
    char string[20];
    int k;
    printf("Enter the string:");
    scanf("%s", string);
    printf("Enter k value:");
    scanf("%d", &k);
    int n = length(string);
    
    char array[n-k+1][k+1];
    generateKGrams(n, k, array, string);
    printKGrams(n, k, array);
}
void generateKGrams(int n, int k, char kGrams[][k+1], char input[]){
    for(int i = 0; input[i+k-1] != '\0'; i++){
        for(int j = 0; j<k; j++){
            kGrams[i][j] = input[i+j];
        }
    }
}
void printKGrams(int n, int k, char kGrams[][k+1]){
    for(int i = 0; i<n-k+1; i++){
        for(int j = 0; j<k; j++){
            printf("%c", kGrams[i][j]);
            
        }
        printf(", ");
}
}
int length(char str[]){
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++)
        len++;
    return len;
}
