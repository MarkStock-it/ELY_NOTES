/*
Hello!

What are Loops?
Loops allow you to repeat a block of code multiple times automatically! 

Instead of writing printf() 10 times, a loop can do it in just 3 lines of code!


The 3 Main Types of Loops in C:

  1. FOR Loop 
     - Best when you KNOW exactly how many times you want to repeat something.
     - Perfect for iterating through Arrays!

  2. WHILE Loop
     - Repeats as long as a condition is TRUE.
     - Best when you don't know how many repetitions you need (e.g., waiting for valid input).

  3. DO-WHILE Loop
     - Similar to a while loop, BUT it guarantees the code runs AT LEAST ONCE 
       before checking the condition!


CODE FORMAT ------------------------

// 1. For Loop: (start_value; condition; update)
for (int i = 0; i < 5; i++) {
    // Runs 5 times (i = 0, 1, 2, 3, 4)
}

// 2. While Loop:
while (condition) {
    // Repeats while condition is true
}

// 3. Do-While Loop:
do {
    // Runs first, THEN checks condition!
} while (condition);

------------------------------------
*/

#include <stdio.h>

int main() {

    // Example 1: FOR Loop (Counting up)
    printf("--- For Loop ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("Loop count: %d\n", i);
    }


    // Example 2: WHILE Loop
    printf("\n--- While Loop ---\n");
    int energy = 3;
    while (energy > 0) {
        printf("Player is running! Energy left: %d\n", energy);
        energy--; // Decrease energy by 1 each time
    }


    // Example 3: DO-WHILE Loop (Runs at least once)
    printf("\n--- Do-While Loop ---\n");
    int choice = 0;
    do {
        printf("Menu: Enter 1 to exit: ");
        scanf("%d", &choice);
    } while (choice != 1);

    printf("Exited successfully!\n");

    return 0;
}