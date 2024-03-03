#include <stdio.h>

// Function prototype
int print(int b);

int main() 
{
    int a = 10; // Local variable

    // Printing the value of 'a'
    printf("The value of a is %d\n", a);

    // Calling the print function with 'a' as argument
   print(a); //function call statement 

    return 0;
}

// Function definition for print
int print(int b)  
{
    // Printing the value of 'b'
    printf("The value of b is %d\n", b);
    return b;
}

//varible scope
//variable type
//variable storage class
//function parameters
//function variable scopes
