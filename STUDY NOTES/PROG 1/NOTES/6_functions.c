/*
Hello!

What are functions? 
Functions are named blocks of code that you can call repeatedly to perform 
a specific task without rewriting the same code.


CODE FORMAT ------------------------

int Ely(int num1, float num2) {
    int num = num1 + num2; // Calculate the result

    return num;            // Send the result back!
}

------------------------------------

Breakdown:
  - Ely       -> The function name.
  - int       -> Return type (the type of value sent back; use "void" if returning nothing).
  - ( ... )   -> Parameters (inputs the function needs to do its job). Can be empty if none needed!


Calling a Function (Inside main):

int main() {

    int result = Ely(1, 2.5);

    return 0;
}

  - Ely(1, 2.5) -> Function call! Passes values into num1 and num2.
  - 1, 2.5      -> Arguments (values sent into the function's parameters).
  - result      -> Catcher variable (stores whatever value Ely returns).
*/