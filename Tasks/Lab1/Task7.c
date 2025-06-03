/* Task 7.Accept two real numbers from the user and perform division.
If the second number is zero, display an error instead of attempting the calculation.. */

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
