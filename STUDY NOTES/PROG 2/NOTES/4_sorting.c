/*
Hello! 

Array: 5  8  3  1  2
Status: Not sorted! 

Let's fix that! :D

Important Sorting Algorithms to remember for exams:
  - Bubble Sort    (Easy to remember, but slow — O(n²))
  - Selection Sort (Finds the smallest element and swaps)
  - Insertion Sort (Builds the sorted array one item at a time)

For the geeks like me (Fast, but usually taught in Data Structures):
  - Quick Sort
  - Merge Sort    (My personal favorite! <3)


-------------------------------------------------------------------
BUBBLE SORT BASICS
-------------------------------------------------------------------

Bubble Sort "bubbles up" the largest unsorted value to the end of 
the array on every pass!

How it works:
1. It compares side-by-side pairs: `array[i]` and `array[i + 1]`.
2. If `array[i] > array[i + 1]`, it SWAPS them!
3. It keeps track of whether any swaps happened during that pass using a `swapped` flag.
4. If a full pass happens with ZERO swaps, the entire array is sorted! 
   The loop exits automatically.


Pro-Tip:
Search "Sorting Algorithm Visualizer" online! Seeing the numbers 
shuffle visually makes sorting algorithms 10x easier to understand. :)
*/

#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int swapped;
    
    do {
        swapped = 0; // Reset flag at the start of each pass

        for (int i = 0; i < size - 1; i++) {
            // If current element is bigger than the next element, swap!
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                swapped = 1; // Record that a swap happened!
            }
        }
    } while (swapped != 0); // Keep going until a pass finishes with NO swaps
}

int main() {

    int numbers[] = {5, 8, 3, 1, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    bubbleSort(numbers, size);

    printf("Sorted array:   ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}