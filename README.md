# Forbidden-Sorting-Algorithms-using-C
Here are the repositories for some humorous sorting algorithms using c language. This sorting algorithms is not used anywhere, it is a parody of some strange algorithms used in internet memes.
Certainly! Here's a brief overview of each sorting algorithm, including a small definition, process, and time complexity:

# 1. Bogo Bogo Sort
  Definition: BogoBogoSort is a variation of Bogosort that recursively applies Bogosort.
  Process: Sorts the first `n-1` elements using BogoBogoSort and then sorts the entire array using BogoSort.
  Time Complexity: Unbounded; the average and worst-case complexity is not defined due to its reliance on random shuffling, making it extremely inefficient.

# 2. Bogo Sort
  Definition: Bogosort is a highly inefficient sorting algorithm based on random permutations.
  Process: Randomly permutes the array until it finds a sorted permutation.
  Time Complexity: Average-case and worst-case time complexity is O((n+1)!), where n is the number of elements. This makes it impractical for large arrays.

# 3. Bozo Sort
  Definition: BozoSort is a deliberately inefficient sorting algorithm that sorts by randomly swapping elements.
  Process: Randomly swaps pairs of elements until the array becomes sorted.
  Time Complexity: Unbounded; it can take an indeterminate amount of time due to random swapping, with no fixed upper bound.

# 4. Gnome Sort
  Definition: GnomeSort is a simple sorting algorithm similar to insertion sort but with a different approach.
  Process: Iterates through the array, comparing and swapping adjacent elements. If an out-of-order element is found, it moves back one position.
  Time Complexity: O(n^2) in both average and worst cases, where n is the number of elements.

# 5. Intelligent Design Sort
  Definition: IntelligentDesignSort is a theoretical sorting algorithm that assumes the array is already sorted or well-designed.
  Process: Checks if the array is sorted, but does not perform any actual sorting.
  Time Complexity: O(n) for checking if the array is sorted, but no real sorting is done.

# 6. Miracle Sort
  Definition: MiracleSort is a humorous sorting algorithm that implies sorting happens instantly.
  Process: Declares the array sorted immediately without performing any actual sorting.
  Time Complexity: O(1) in the conceptual sense, as it assumes sorting occurs instantaneously.

# 7. Pancake Sort
  Definition: PancakeSort is a sorting algorithm that sorts an array using a series of prefix reversals.
  Process: Repeatedly finds the largest unsorted element, flips it to the front, and then flips it into place.
  Time Complexity: O(n^2), where n is the number of elements, due to the need for multiple reversals.

# 8. Quantum Bogo sort
  Definition: QuantumBogosort is a theoretical and humorous extension of Bogosort using quantum computing principles.
  Process: Assumes the array is in a quantum superposition of all possible permutations and sorts it by measurement.
  Time Complexity: Unbounded; it's a theoretical joke rather than a practical algorithm.

# 9. Schrödinger's Sort
  Definition: Schrödinger's Sort is a theoretical sorting algorithm inspired by Schrödinger's cat thought experiment.
  Process: Assumes the array is in a superposition of sorted and unsorted states, sorting it by checking its state.
  Time Complexity: Unbounded; the algorithm is a conceptual joke, not practical.

# 10. Sleep Sort
  Definition: SleepSort is a sorting algorithm that uses timing to sort numbers based on how long they "sleep."
  Process: Each number creates a thread that sleeps for a time proportional to the number's value and then prints itself.
  Time Complexity: O(n), where n is the number of elements, but it is impractical due to dependency on system timing and thread management.

# 11. Slow Sort
  Definition: SlowSort is an intentionally inefficient sorting algorithm that delays the sorting process.
  Process: Recursively sorts the left and right halves of the array, compares and swaps elements, and adds delays.
  Time Complexity: O(n^2), where n is the number of elements, due to its recursive nature and added delays.

# 12. Stalin Sort
  Definition: StalinSort is a humorous sorting algorithm that removes elements that are not in non-decreasing order.
  Process: Iterates through the array and removes elements that are out of order, only keeping sorted elements.
  Time Complexity: O(n^2) in the worst case, where n is the number of elements, due to the removal process.
