/*
Hello!!

We are now dipping into my absolute favorite lesson! 
This is where everything clicked for me, and I hope it works the same for you!

What is Memory Allocation?

In RAM, your C program works with two main areas:
  1. The STACK  -> Managed automatically by C. Fast, but fixed in size.
  2. The HEAP   -> Managed manually by YOU! Flexible, dynamic, and powerful.

When you declare `int Ely[50];`, C automatically allocates space on the STACK. 
The size is fixed—you can never grow or shrink it while the program is running.

This is where DYNAMIC MEMORY ALLOCATION helps.


My favorite function: malloc() (Memory Allocation)

-------------------------------------------------------------------
  int SIZE = 10;
  int *Ely = malloc(SIZE * sizeof(int));
-------------------------------------------------------------------

This line basically creates the dynamic equivalent of `int Ely[10];`! Cool, right?


Let's break down how malloc() actually works:

1. `int *Ely` -> Creates a pointer named Ely.
2. `sizeof(int)` -> Tells malloc how many bytes ONE integer takes (usually 4 bytes).
3. `SIZE * sizeof(int)` -> Asks for enough Heap space to fit 10 integers (40 bytes total).
4. `malloc(...)` -> Goes to the Heap, claims those 40 bytes, and returns the starting memory address to Ely!

Now, Ely acts just like a regular array! You can access elements using `Ely[0]`, `Ely[1]`, etc.


The Superpower: realloc() (Resizing your allocated mem)

Unlike regular arrays, Heap memory can be resized whenever you want!

    Ely = realloc(Ely, (SIZE - 1) * sizeof(int)); // Now you have space for 9 integers!
    Ely = realloc(Ely, (SIZE + 10) * sizeof(int)); // Now you have space for 20 integers!


Why is Memory Management important? (And dangerous!)

1. ALWAYS use free(Ely) when you are done! 
   Unlike the Stack, Heap memory DOES NOT clean up after itself. If you forget to free it,
   it stays trapped in RAM until your program closes—this is called a MEMORY LEAK!

2. ALWAYS check if malloc succeeded:
   If the Heap runs out of memory, malloc returns NULL. Trying to write to a NULL pointer 
   will cause your program to crash instantly with a Segmentation Fault!
*/

#include <stdio.h>
#include <stdlib.h> // Required for malloc, realloc, and free!

int main() {

    int size = 5;

    // 1. Dynamically allocate memory for 5 integers on the Heap
    int *Ely = malloc(size * sizeof(int));

    // Safety check: Always verify malloc didn't fail!
    if (Ely == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Populate the dynamic array
    for (int i = 0; i < size; i++) {
        Ely[i] = (i + 1) * 10; // Stores 10, 20, 30, 40, 50
    }

    printf("Original array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", Ely[i]);
    }
    printf("\n\n");

    // 2. Resize the array to hold 3 integers using realloc()
    size = 3;
    Ely = realloc(Ely, size * sizeof(int));

    printf("Resized array elements (after shrinking):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", Ely[i]);
    }
    printf("\n");

    // 3. Clean up! Give the memory back to the Heap
    free(Ely);
    Ely = NULL; // Good habit: set pointers to NULL after freeing

    return 0;
}