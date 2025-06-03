/*Task 8. Write a program that calculates the surface area and volume of a cube for
a user-specified length of the cube's edge. The program should be protected against
entering incorrect data, i.e. the length of the cube's edge should be positive.
Otherwise, the program should write a warning message and stop. Use the IF-ELSE statement.*/

#include<stdio.h>

int main(void){

  float area, edge, volume;
  printf("Enter the edge length of the cube: ");
  scanf("%f", &edge);
  if ( edge > 0) {
    area =  6 * edge * edge;
      volume = edge * edge * edge;
    printf("Surface Area is: %.2f\n", area);
    printf("Volume of Cube: %.2f", volume);
  }
  else {
    printf("Edge length should be positive!");
  }
  
return 0;
}
