#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Array is not sorted
        }
    }
    return 1; // Array is sorted
}

// Intelligent Design Sort function (conceptual)
void intelligentDesignSort(int arr[], int n) {
    // Assume array is already sorted or well-designed
    // Just for illustration, we'll check if it's sorted
    if (!isSorted(arr, n)) {
        // No real sorting happens; just a check
        printf("Array is not sorted. This is a design flaw.\n");
    } else {
        printf("Array is already sorted. Intelligent Design confirmed.\n");
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    intelligentDesignSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
