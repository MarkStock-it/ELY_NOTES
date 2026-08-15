/*
Hello!

What is a Variable?
A variable is like a labeled box in your computer's memory that holds a value. 
You can put data in it, look at what's inside, or change it whenever you need to.


Syntax:
  dataType variableName = initialValue;


Naming Rules in C:
  1. Must start with a letter (a-z, A-Z) or an underscore (_).
  2. Cannot start with a number!
  3. Case sensitive! ('myVar' and 'myvar' are two completely different variables).
  4. Cannot use C reserved keywords (like int, return, if, main).


Two Steps of a Variable:
  1. Declaration   -> Creates the box (e.g., int age;)
  2. Initialization -> Puts a value inside (e.g., age = 18;)
  (Or you can do both at once: int age = 18;)
*/

#include <stdio.h>

int main() {

    // 1. Declaration & Initialization
    int score = 0; // Starts at 0

    printf("Starting score: %d\n", score);

    // 2. Changing the value
    score = 50; // The box now holds 50!
    printf("New score: %d\n", score);

    // 3. Updating using math
    score = score + 10; // Adds 10 to current score (or use score += 10)
    printf("Final score: %d\n", score);

    return 0;
}