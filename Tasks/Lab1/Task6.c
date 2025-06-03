/* Task 6 Write a program that calculates the perimeter and area of a square 
for the length of the side of the square provided by the user. The program should be protected
against entering incorrect data, i.e the length of the side of the square should be positive.
Otherwise, the program should write a warning message and stop. Use the IF-ELSE conditional
statement. */

#include<stdio.h>

int main(void){

  float side;

  printf("Enter the side length of square: ");
  scanf("%f", &side);

  if  (side > 0) {
    float perimeter = 4 * side;
    float area = side * side;
    
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
     }

  else { 
        printf("Invalid input! Side length must be positive.");
  }
  
return 0;
}
