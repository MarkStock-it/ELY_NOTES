/*
Hello!

What are Conditionals?
Conditionals let your program make decisions! 
"IF this condition is true, run this code. Otherwise, do something else!"

(Go check out the Strings notes to solve the Decider() challenge using this!)


Comparison Operators:
  ==  Equal to (Careful! '=' is for assigning values, '==' is for checking!)
  !=  Not equal to
  >   Greater than
  <   Less than
  >=  Greater than or equal to
  <=  Less than or equal to


Logical Operators (Combine conditions):
  &&  AND  (Both conditions MUST be true)
  ||  OR   (At least ONE condition must be true)
  !   NOT  (Flips true to false, or false to true)


CODE FORMAT ------------------------

if (condition) {
    // Runs if condition is TRUE
} 
else if (another_condition) {
    // Runs if first was FALSE, but this one is TRUE
} 
else {
    // Runs if EVERYTHING above was FALSE
}

------------------------------------
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 18;

    // Example 1: Basic If / Else
    if (age >= 18) {
        printf("You can vote!\n");
    } else {
        printf("Too young to vote!\n");
    }


    // Example 2: Logical OR (||)
    char choice = 'y';

    if (choice == 'Y' || choice == 'y') {
        printf("You selected YES!\n");
    }


    return 0;
}