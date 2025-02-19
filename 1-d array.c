#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int value) {
    
    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos - 1] = value; 
    
    (*n)++;
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
    int n, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

   
    insertElement(arr, &n, pos, value);

    
    displayArray(arr, n);

    return 0;
}
