#include <stdio.h>


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}


int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;ex
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr1[] = {12, 34, 54, 23, 4, 56, 90}; 
    int arr2[] = {2, 4, 12, 23, 34, 54, 56, 90}; 
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target, index;

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    
    index = linearSearch(arr1, size1, target);
    if (index != -1) {
        printf("Linear Search: Element %d found at index %d\n", target, index);
    } else {
        printf("Linear Search: Element %d not found\n", target);
    }

   
    index = binarySearch(arr2, size2, target);
    if (index != -1) {
        printf("Binary Search: Element %d found at index %d\n", target, index);
    } else {
        printf("Binary Search: Element %d not found\n", target);
    }

    return 0;
}
