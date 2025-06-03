/* Task 7. Write a program that divides two real numbers (FLOAT type) entered by the user. 
Take care of the appropriate formatting of the result and messages guiding the user 
through the data entry, and also protect the program against division by the number zero,
i.e. if the second number is zero, the program should not calculate the result, 
but print a warning message and stop. */

#include<stdio.h>

int main (void){

float a, b;
  printf("Enter the numerator: ");
  scanf("%f", &a);
  printf("Enter the denominator: ");
  scanf("%f", &b);
  if (a > 0, b != 0) //b != 0 this means if b is NOT equal to 0 
    //or we can use b==0
  {
    printf("The Result is: %.2f\n", a/b);
  }
  else {
    printf("Division by zero is not allowed!");
  }
  
return 0;
}
