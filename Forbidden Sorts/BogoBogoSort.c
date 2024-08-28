#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Array is not sorted
        }
    }
    return 1; // Array is sorted
}

// Function to shuffle the array
void shuffle(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// BogoSort function that is used recursively in BogoBogoSort
void bogoSort(int arr[], int n) {
    while (!isSorted(arr, n)) {
        shuffle(arr, n);
    }
}

// BogoBogoSort function
void bogoBogoSort(int arr[], int n) {
    if (n <= 1) return;

    // Sort the first n-1 elements using BogoBogoSort
    bogoBogoSort(arr, n - 1);

    // Now sort the entire array using BogoSort
    bogoSort(arr, n);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Seed the random number generator
    srand(time(0));

    bogoBogoSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
//BogoBogo Sort is an even more inefficient sorting algorithm than Bogosort. 
//It's essentially a combination of Bogosort and BogoSort's approach, and it's one of the slowest and most impractical sorting algorithms imaginable. 
//The algorithm involves sorting an array recursively using BogoSort, and if the array is not sorted, it generates a new permutation until it is.

