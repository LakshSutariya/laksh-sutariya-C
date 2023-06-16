#include <stdio.h>

void insertValue(int arr[], int size, int index, int value) {
    // Shift elements to the right to make room for the new value
    for (int i = size - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the desired index
    arr[index] = value;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2;
    int value = 100;

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertValue(arr, size, index, value);
    size++; // Increase the size of the array

    printf("Modified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}