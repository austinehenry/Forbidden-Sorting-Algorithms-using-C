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

// Function to swap two elements in the array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform Bozosort
void bozosort(int arr[], int n) {
    while (!isSorted(arr, n)) {
        // Pick two random indices
        int i = rand() % n;
        int j = rand() % n;

        // Swap the elements at the random indices
        swap(&arr[i], &arr[j]);
    }
}

int main() {
    int arr[] = {4, 2, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    srand(time(0)); // Seed the random number generator

    bozosort(arr, n);

    printf("Bozosorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//Bozosort is similar to Bogosort in that it is an intentionally inefficient and humorous sorting algorithm. 
//However, instead of generating completely random permutations of the array, Bozosort randomly swaps two elements in the array and checks if the array is sorted after each swap. 
//The process is repeated until the array is sorted.
