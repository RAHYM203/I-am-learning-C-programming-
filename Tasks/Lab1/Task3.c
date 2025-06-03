/* Task3 Write a program that adds two integer numbers (INT type) entered by user. */

#include<stdio.h>

int main(void){
  int a;
  int b;

  printf("Enter the first number:");
  scanf("%d, &a);

  printf("Enter the second number:");
  scanf("%d", &b);

  printf("Sum of two numbers are: %d\n", a+b);
  

return 0;
}
