/*
Hello!

We will now learn pointers!

I love pointers, but they can be super confusing for beginners because 
the first question everyone asks is: "WHY!? Why use pointers at all?"

A pointer stores the MEMORY ADDRESS of the variable it is pointing to. 

Let 'P' be a pointer to variable 'A':
  - Variable A holds the value: 100
  - Variable A lives at address: 0x67HKZ

If you print P, it simply prints A's address -> 0x67HKZ
To get A's actual value through P, you must DEREFERENCE it using "*".

Printing *P (dereferenced P) will give you 100 — because P points to A!


-------------------------------------------------------------------
"Why not just use 'A' directly if they hold/show the same value?"
-------------------------------------------------------------------

Here is where pointers become a real superpower!

Normally, in C, functions work with COPIES of variables (Pass by Value). 
If you try to change a variable inside a function, the original variable 
outside the function DOES NOT CHANGE!


Example WITHOUT Pointers (Fails to change 'Num'):

    void tryToChange(int Num) {
        Num = 100; // Only changes the local copy!
    }

    int main() {
        int Num = 1;
        tryToChange(Num);
        // Num is STILL 1 here!
    }


Example WITH Pointers (Successfully changes 'Num'):

    void actuallyChange(int *NumPtr) {
        *NumPtr = 100; // Go to Num's address and overwrite its value!
    }

    int main() {
        int Num = 1;
        actuallyChange(&Num); // Pass Num's memory address using '&'
        // Num is NOW 100!
    }

By passing a pointer, you give the function direct access to modify variables 
outside its local scope!
*/

#include <stdio.h>

void tryToChange(int Num) {
    Num = 100;
}

void actuallyChange(int *NumPtr) {
    *NumPtr = 100;
}

int main() {

    int Num = 1;

    printf("Original Num: %d\n", Num);

    // Attempt 1: Without Pointer
    tryToChange(Num);
    printf("After tryToChange(): %d (Unchanged!)\n", Num);

    // Attempt 2: With Pointer (&Num passes address)
    actuallyChange(&Num);
    printf("After actuallyChange(): %d (Success!)\n", Num);

    return 0;
}