/*
Hello!

What are Data Types?
Data types tell C what KIND of information a variable is holding and HOW MUCH memory to save for it.

Think of them like different sized containers for your data!


Common Basic Data Types:

  1. int    -> Whole numbers (Integers)
                Example: 10, -5, 0
                Specifier: %d

  2. float  -> Decimal numbers (Single precision)
                Example: 3.14, -0.5
                Specifier: %f

  3. double -> Precise decimal numbers (Double precision)
                Example: 3.1415926535
                Specifier: %lf

  4. char   -> A single character or symbol
                Example: 'A', 'z', '!', '7'
                Specifier: %c
                (Must be inside SINGLE quotes ' '!)


Important Rules:
  - Match your % specifier with your data type when using printf() or scanf().
  - If you store 3.99 into an int, C will chop off the decimals and just keep the 3.
*/

#include <stdio.h>

int main() {

    // Declaring variables with data types:
    int age = 19;
    float gpa = 3.75f;
    double exactPi = 3.1415926535;
    char grade = 'A';

    // Printing them out:
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);         // %.2f prints only 2 decimal places!
    printf("Exact Pi: %lf\n", exactPi);
    printf("Grade: %c\n", grade);

    return 0;
}