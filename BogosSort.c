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
        int randomIndex = rand() % n;
        // Swap arr[i] and arr[randomIndex]
        int temp = arr[i];
        arr[i] = arr[randomIndex];
        arr[randomIndex] = temp;
    }
}

// Function to perform Bogosort
void bogosort(int arr[], int n) {
    while (!isSorted(arr, n)) {
        shuffle(arr, n);
    }
}

int main() {
    int arr[] = {3, 1, 4, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    srand(time(0)); // Seed the random number generator

    bogosort(arr, n);

    printf("Bogosorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//This algorithm is not practical for sorting in real-world applications, but it serves as an interesting example of a brute-force approach to sorting.
//Process: Randomly shuffle the array and check if it is sorted. If not, shuffle again and repeat until sorted.
