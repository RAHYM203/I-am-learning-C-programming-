/* Task 9. Ask the user to input the lengths of both bases (a, b) and the height (h)
of a trapezoid. Validate the input and compute the area using the trapezoid area formula.*/

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
