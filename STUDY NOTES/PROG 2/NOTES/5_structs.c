/*
Hi! 

We will be learning STRUCTS now!
So, what is a struct??

A struct basically lets you create your OWN custom data type that can 
hold multiple variables of different data types all together.

Confusing right?

Think of it like a profile card! A single `int` can only hold a number, 
and a `char` array can only hold text. But a `struct` variable can hold 
an age, a weight, AND a name all inside ONE single variable! :O


TYPEDEF & AURA POINTS:

Normally, every time you create a struct variable, you have to write `struct` in front of it:
    struct Person Person_1;

Using `typedef` gives you maximum aura points because it creates a shortcut (alias), 
so you can skip typing `struct` entirely!


-------------------------------------------------------------------
CODE EXAMPLE
-------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h> // Needed for strcpy()!

// Defining our custom data type
typedef struct Person {
    int age;
    float weight;
    char name[50];
} Per; // 'Per' is now our clean shortcut name!


int main() {

    // Creating a variable 'Person_1' using our custom type 'Per'
    Per Person_1;

    // To access or assign values inside a struct, we use the DOT (.) operator!
    Person_1.age = 18;
    Person_1.weight = 65.5;
    
    // Remember: Strings in C can't be assigned with '=', so we use strcpy!
    // Which Copies strings!!
    strcpy(Person_1.name, "Ely");

    // Printing out the struct values
    printf("--- Person Profile ---\n");
    printf("Name:   %s\n", Person_1.name);
    printf("Age:    %d\n", Person_1.age);
    printf("Weight: %.2f kg\n", Person_1.weight);

    return 0;
}










