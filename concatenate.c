#include <stdio.h>


void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j;

    
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    
    for (j = 0; j < size2; j++) {
        result[i + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6}; 
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2; 
    int result[size3];

    
    concatenateArrays(arr1, size1, arr2, size2, result);

    
    printf("Concatenated array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
