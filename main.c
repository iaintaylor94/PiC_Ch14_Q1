// program to demonstrate the use of a pointer to a function

#include <stdio.h>

// Declare Function
void functionPointer (int);

// Define Types
typedef void (*FunctionPtr) (int);

int main(void) {

  FunctionPtr instance = &functionPointer;

  instance (100);
  instance (200);
  
  return 0;
}

// Define Function
void functionPointer (int n) {
  printf ("%d\n", n);
}