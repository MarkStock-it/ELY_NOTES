/*
Hello!

What is a Switch Statement?
Instead of writing a long chain of "if / else if / else" checks, a switch statement 
lets you cleanly choose between multiple specific values!

Think of it like a menu selector!


Important Rules:
  - switch works with discrete values like integers ('int') or single characters ('char').
  - break; stops the switch statement once a matching case runs! (Without 'break', 
    it falls through and runs the cases below it too!).
  - default: acts like an 'else' block — it runs if no cases match.


CODE FORMAT ------------------------

switch (variable) {
    case value1:
        // Code to run for value1
        break;

    case value2:
        // Code to run for value2
        break;

    default:
        // Runs if none of the cases match!
        break;
}

------------------------------------
*/

#include <stdio.h>

int main() {

    char grade = 'A';

    // Example: Grade Feedback
    switch (grade) {
        case 'A':
            printf("Outstanding work!\n");
            break;

        case 'B':
            printf("Good job!\n");
            break;

        case 'C':
            printf("Passed, but room to improve!\n");
            break;

        case 'F':
            printf("Needs retake.\n");
            break;

        default:
            printf("Invalid grade entered!\n");
            break;
    }

    return 0;
}