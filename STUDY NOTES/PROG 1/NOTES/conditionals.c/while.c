/*
Hello!

What is a While Loop?
A loop repeats a block of code over and over as long as a condition remains TRUE!



Key Rule:
  - ALWAYS update your counter/condition inside the loop! 
  - If the condition is always true, your code will get stuck in an INFINITE LOOP!
    (Press Ctrl + C in your terminal to kill an infinite loop!)


CODE FORMAT ------------------------

while (condition) {
    // Code here repeats as long as condition is TRUE

    // Don't forget to change something so the condition eventually becomes FALSE!
}

------------------------------------
*/

#include <stdio.h>

int main() {

    // Example 1: Basic Counter
    int count = 1;

    while (count <= 5) {
        printf("Count is: %d\n", count);
        count++; // Increments count by 1 (Same as count = count + 1)
    }

    printf("Done counting!\n\n");


    // Example 2: Input Validation (Keep asking until valid!)
    int pin = 0;

    while (pin != 1234) {
        printf("Enter secret 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin != 1234) {
            printf("Wrong PIN! Try again.\n");
        }
    }

    printf("Access Granted!\n");

    return 0;
}