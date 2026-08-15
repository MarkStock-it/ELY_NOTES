/*
Hello!

We will be learning about Binary Search!

Key Rule: ONLY WORKS ON SORTED DATA!
If your array is random or unsorted, you must sort it first (or use Linear Search).

Why is it goated?
It is REALLY FAST! Instead of checking every single item one by one (Linear Search), 
Binary Search HALVES your remaining search area on every single step!

Think of a physical dictionary:
If you want to look up the word "Pointer", you don't start at page 1 and turn 
pages one by one. You flip to the middle! If "P" is further ahead, you throw 
away the entire left half of the book and search only the right half!


HOW IT WORKS (The 3 Steps):

1. Find the middle element (`mid = (low + high) / 2`).
2. If `arr[mid] == target`, you found it.
3. If `target` is BIGGER, throw away the left half (`low = mid + 1`).
   If `target` is SMALLER, throw away the right half (`high = mid - 1`).

Keep repeating until `low > high` (meaning the item isn't in the list).
*/

#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Finds the middle index safely

        // Case 1: Target found at mid!
        if (arr[mid] == target) {
            return mid; // Return the index location
        }

        // Case 2: Target is in the right half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // Case 3: Target is in the left half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target was not found in the array
}

int main() {

    // MUST BE SORTED!
    int numbers[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 23;

    printf("Searching for %d in sorted array...\n", target);

    int result = binarySearch(numbers, size, target);

    if (result != -1) {
        printf("Found %d at index %d! \n", target, result);
    } else {
        printf("%d was not found in the array. \n", target);
    }

    return 0;
}