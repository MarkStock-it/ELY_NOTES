/*
Hello!

Array is basically a storage system ,
there are two different types of arrays,
dynamic and static , 

Static is a storage with a fixed size.

An array must have a data type to know what kind of data is going to be stored in it.

for example

int SIZE = 10;

int Ely[SIZE];

this means that Ely is a collection of 10 int variables,

and what makes arrays so cool is that you can just access those variable with the same name!
you just have to go through them via Indexes.

Indexes always start at 0 ,
so your first variable would be ,

Ely[0] = 1;  <--- This makes your first variable have the value of 1.
And your max index will always be SIZE - 1 because you start at 0 
(This is important because when coding , it's common to go out of bounds which causes seg fault).


*/




// CODE EXAMPLE

#include <stdio.h>

#define SIZE 5 // Using a #define macro for array size is standard C practice!

int main() {

    // Declaring and initializing an array:
    int Ely[SIZE] = {10, 20, 30, 40, 50};

    // Modifying a specific index:
    Ely[0] = 99; // Changes the first element from 10 to 99!

    // Accessing and printing array elements using a loop:
    printf("Array elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Ely[%d] = %d\n", i, Ely[i]);
    }

    return 0;   
}