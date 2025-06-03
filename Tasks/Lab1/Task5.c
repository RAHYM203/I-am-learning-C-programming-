/* Task5 Write a program that, for an integer entered by user, 
calculates its square and cube and prints appropriate messages on the screen. */

#include<stdio.h>

int main(void){

int num;

printf("Enter a integer to calculate its square and cube: ");
scanf("%d", &num);

printf("The square is: %d\n", num * num);
printf("The Cube is: %d\n", num * num * num);
 

  return 0;
}
