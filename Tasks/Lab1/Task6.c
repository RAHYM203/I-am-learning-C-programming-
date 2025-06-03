/* Task 6 Request the side length of a square from the user.
If the input is positive, calculate and display the square's perimeter and area.
Otherwise, show a warning. */

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
