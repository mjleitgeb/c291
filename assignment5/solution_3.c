
#include <stdio.h>

int printUniqueElements(int elements[], int lenArray);

int main(void)
{
    int size;
    int input;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    int elements[size];
    printf("Input: ");
    for(int i = 0; i < size; i++)  {  
        scanf(" %d", &elements[i]);  
    }  
    int n = sizeof(elements) / sizeof(elements[0]);
 
    n = printUniqueElements(elements, n);
 
    for (int i = 0; i < n; i++)
        printf("%d ", elements[i]);
}
int printUniqueElements(int elements[], int lenArray)
{
    int filter[lenArray];

    int j = 0;

    for (int i = 0; i < lenArray - 1; i++)
        if (elements[i] != elements[i + 1])
            filter[j++] = elements[i];
 
    filter[j++] = elements[lenArray - 1];
 
    for (int i = 0; i < j; i++)
        elements[i] = filter[i];
}
