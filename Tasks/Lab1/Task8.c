/*Task 8. Calculate the surface area and volume of a cube based on the user-provided 
edge length. Input must be a positive value; otherwise, show a warning..*/

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
