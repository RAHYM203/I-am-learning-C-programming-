/* Task 5. Ask the user to enter an integer, then calculate and
display both its square and cube. */

#include<stdio.h>

int main(void){

int num;

printf("Enter a integer to calculate its square and cube: ");
scanf("%d", &num);

printf("The square is: %d\n", num * num);
printf("The Cube is: %d\n", num * num * num);
 

  return 0;
}
