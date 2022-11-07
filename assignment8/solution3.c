#include <stdio.h>
#include <stdlib.h>

typedef struct Array Array;
struct Array {
 int* data;
 size_t length;
};

Array* new_array(size_t len){
    Array* arr = malloc(sizeof(Array));
    arr->data = calloc(len, sizeof(int));
    arr->length = len;
    return arr;
}

int array_get(Array* arr, int index){
    return arr->data[index];
}

void array_set(Array* arr, int index, int value){
    arr->data[index] = value;
}

void delete_array(Array* arr){
    free(arr->data);
}

int main(void){
    Array* arr = new_array(5);
    array_set(arr, 0, 2);
    array_set(arr, 1, 3);
    array_set(arr, 2, 5);
    array_set(arr, 3, 7);
    array_set(arr, 4, 11);
    for (int i = 0; i < arr->length; i++) {
        printf("%d ", array_get(arr, i));
    }
}
