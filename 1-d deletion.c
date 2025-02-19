#include <stdio.h>

void deleteElement(int arr[], int *n, int pos) {
    
    if (pos < 1 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }

    
    for (int i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    (*n)--;
}

void displayArray(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100]; 
    int n, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

    
    deleteElement(arr, &n, pos);

    
    displayArray(arr, n);

    return 0;
}
