/* Task 9. Write a program that calculates the area of a trapezoid for positive
numbers a, b,h (lengths of the bases and height) given by the user, displaying an
appropriate message on the screen. The program should be protected against entering
incorrect data, i.e. the lengths a, b, h should be positive. 
Otherwise, the program should write a warning message and stop. Use the IF-ELSE instruction.*/

#include<stdio.h>

int main(void){

  float a, b, h, trapezoid;
  
  printf("Enter base a: ");
  scanf("%f", &a);
  
  printf("Enter base b: ");
  scanf("%f", &b);
  
  printf("Enter height h: ");
  scanf("%f", &h);
  
  if (a > 0 && b > 0 && h > 0) {
    trapezoid = ((a + b) / 2) * h;
    printf(" Area of trapezoid is: %.2f\n ", trapezoid);
  }
  else {
    printf("The lengths a, b, h should be positive! ");
  }
  
return 0;
}
