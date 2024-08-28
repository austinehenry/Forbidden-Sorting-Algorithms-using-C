#include <stdio.h>

// Function to reverse a subarray
void flip(int arr[], int i) {
    int start = 0;
    while (start < i) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        start++;
        i--;
    }
}

// Function to find the index of the maximum element in arr[0..n-1]
int findMax(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Function to perform Pancake Sort
void pancakeSort(int arr[], int n) {
    for (int size = n; size > 1; size--) {
        // Find the index of the maximum element in arr[0..size-1]
        int maxIndex = findMax(arr, size);

        // Move the maximum element to the front if it's not already there
        if (maxIndex != size - 1) {
            // Flip the maximum element to the front
            flip(arr, maxIndex);
            // Flip the entire array to move the maximum element to its correct position
            flip(arr, size - 1);
        }
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
    int arr[] = {3, 6, 1, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    pancakeSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
//Pancake Sort is an interesting and somewhat unconventional sorting algorithm that works by flipping subarrays of a list. 
//The key idea is to use a "flip" operation to move the largest unsorted element to its correct position and then reduce the size of the problem.
